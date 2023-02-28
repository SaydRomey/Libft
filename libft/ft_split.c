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

size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (*s != c)
		count++;
	while (*(s + i))
	{
		if (*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0')
			count++;
		i++;
	}
	return (count);
}

char	*word_maker(char const *s, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		*(ptr + i) = *(s + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

char	**ft_free(char **split)
{
	int	i;

	i = 0;
	while (*(split + i))
	{
		free(*(split + i));
		i++;
	}
	free(split);
	return (NULL);
}

char	**splitter(char **split, const char *s, char c, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	j = 0;
	index = -1;
	while (++index < count)
	{
		while (*(s + i))
		{
			while (*(s + i) == c)
				i++;
			while (*(s + i + j) != c && *(s + i + j) != '\0')
				j++;
			*(split + index) = word_maker((s + i), (j));
			if (!*(split + index))
				return (ft_free(split));
			break ;
		}
	i = i + j;
	j = 0;
	}
	*(split + index) = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	count;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	if (count == 0 || ft_strlen(s) == 0)
	{
		split = (char **)malloc(sizeof(char *));
		if (!split)
			return (NULL);
		*split = NULL;
		return (split);
	}
	split = (char **)malloc((word_count(s, c) + 1) * (sizeof(char *)));
	if (!split)
		return (NULL);
	split = splitter(split, s, c, count);
	return (split);
}

// #include "ft_strlen.c"

// int	main(void)
// {
// 	char	**result;
// 	char	*str= "Hi! This is a test string";
// 	char	delim = 'i';
// 	int		i;

// 	result = ft_split(str, delim);
// 	if (!result)
// 	{
// 		printf("NOPE !");
// 		return (1);
// 	}

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }

/*
allocate with malloc and return array of strings
	obtained by splitting 's' using the char 'c' as delimiter
		must end with a NULL pointer.

s : string to be split
c : delimiter char
result : array to be filled with words from input
w_count : number of words in input string + specific memory for result

call 'ft_count_word' to determine number of word in the input string
	then use count to allocate memory for array of strings
		that will be the result.

'ft_count_words' function scans input string and 
	increment a word count each time it encounters a
		non-empty sequence of characters that is not seperated
			by the given character.

'ft_count_letter' function is used to determine the
	length of a word in the input string.
it scans the input string until it encounters the given character
	or the end of the string, and returns 
		the number of characters it encountered.

'ft_word_to_str' function takes a string and a character as input
	and returns a new string that contains the characters from
		the input string up to the given character or
			the end of the string.
uses the 'ft_count_letter' function to determine 
	the length of the word in the input string.

'ft_words_to_arr' function is used to populate the result array
	with the words from the input string.
calls the 'ft_word_to_str' function to get each word
	and assigns the resulting string to an element
		in the result array.

returns the result array.

If any memory allocation fails, function returns NULL
*/
