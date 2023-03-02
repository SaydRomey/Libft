/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:42 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 12:52:10 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void    ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
   			++s;
   		tmp = s;
   		while (*tmp && *tmp != sep)
   			++tmp;
   		if (*tmp == sep || tmp > s)
   		{
   			*tab_p = ft_substr(s, 0, tmp - s);
			if (tab_p == NULL)
			{
				while (tab_p-- != tab)
					free(*tab_p);
				free(tab);
				return ;
			}
   			s = tmp;
   			++tab_p;
			free(*tab_p);
   		}
	}
}

static int    ft_count_words(char const *s, char sep)
{
	int    word_count;

	word_count = 0;
	while (*s)
	{
   		while (*s == sep)
   			++s;
   		if (*s)
   			++word_count;
   		while (*s && *s != sep)
   			++s;
	}
	return (word_count);
}

char    **ft_split(char const *s, char c)
{
	char    **new;
	int   	 size;

	if (!s)
   	 return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
   		return (NULL);
	ft_allocate(new, s, c);
	if (!*new)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

// #include "ft_substr.c"
// #include "ft_strlen.c"
// #include "ft_calloc.c"
// #include "ft_bzero.c"

// int	main(void)
// {
// 	char	**words;
// 	int		i;

// 	words = ft_split("Hi!, This is a test string", 'i');
// 	if (!words)
// 	{
// 		printf("\nNOPE !\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (0);
// }

/*
ft_count_words : counts number of words in 's'
	(number of substrings seperated by 'c')
loops through 's' and increment 'word_count'
	every time it encounters the beginning of a new word
		(skips over the seperator char)

ft_split : allocates an array of pointers 'new'
	with enough space to hold the number of words 
		counted by 'ft_count_words'
each element of 'new' will be a pointer to a substring

ft_allocate : populates the 'new' array with substrings

loops through 's' and identifies the beginning and end of each word,
	based on seperator 's'
allocates memory for each substring
	(using 'ft_substr') and
		copies char from 's' to the new memory location
			in the 'new' array
advances 's' to the beginning of the next word,
	and advances the new memory location in the
		'new' array

advances 's' to the beginning of the next word,
	and the 'new' array pointer to the next element

when all substrings are copied into 'new',
	adds a NULL pointer at the end of the array
		to mark the end of the list of substrings

returns the 'new' array, wich now contains pointers to
	each of the substrings
*/
