/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:42 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:43:22 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
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

static char	*word_maker(char const *s, size_t len)
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

static char	**ft_free(char **split)
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

static char	**splitter(char **split, const char *s, char c, size_t count)
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

/*
#include "ft_strlen.c"
#include "ft_calloc.c"
#include "ft_memcpy.c"
#include "ft_bzero.c"
#include "ft_memset.c"

int	main(void)
{
	char	**result;
	char	*str= "iiHi! This is a test stringiii";
	char	delim = 'i';
	int		i;

	result = ft_split(str, delim);
	if (!result)
	{
		printf("NOPE !");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/