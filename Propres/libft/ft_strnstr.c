/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:16:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 17:40:23 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle [j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include "ft_strlen.c"

int	main(void)
{
	const char	*haystack;
	const char	*needle;
	size_t		len;
	char		*result;


	haystack = "hello there";
	needle = "here";
	len = ft_strlen(haystack);
	result = ft_strnstr(haystack, needle, len);

	printf("\nft_stnstr ");
	if (result == NULL)
	{
		printf("could not find '%s' in '%s'\n", needle, haystack);
	}
	else
	{
		printf("found '%s' in '%s'", needle, haystack);
		printf(" at index %ld\n", result - haystack);
	}
	printf("\nWith %zu characters searched\n\n", len);
	return (0);
}
*/