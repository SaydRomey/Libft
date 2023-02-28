/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:16:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:53:44 by cdumais          ###   ########.fr       */
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

// #include "ft_strlen.c"

// int	main(void)
// {
// 	const char	*haystack = "hello there";
// 	const char	*needle = "here";
// 	size_t		len = ft_strlen(haystack);
// 	char		*result = ft_strnstr(haystack, needle, len);
// 	char		*result2 = strnstr(haystack, needle, len);

// 	printf("\nft_strlen");
// 	if (result == NULL)
// 	{
// 		printf("\ncould not find '%s' in '%s'\n", needle, haystack);
// 	}
// 	else
// 	{
// 		printf(" found '%s' in '%s'", needle, haystack);
// 		printf(" at index %ld\n", result - haystack);
// 	}
// 	printf("\nWith %zu characters searched\n\n", len);
// 	printf("\nstrlen");
// 	if (result2 == NULL)
// 	{
// 		printf("\ncould not find '%s' in '%s'\n", needle, haystack);
// 	}
// 	else
// 	{
// 		printf(" found '%s' in '%s'", needle, haystack);
// 		printf(" at index %ld\n", result2 - haystack);
// 	}
// 	printf("\nWith %zu characters searched\n\n", len);
// 	return (0);
// }

/*
tests;
len = 0
haystack and needle are the same
needle longer than haystack
haystack ending before needle
len = ft_strlen(haystack) - 1; to stop before last letter
needle not found in haystack
*/

/*
searche for	first occurrence of the string 
		'needle' in the string 'haystack', 
			where not more than len characters are searched.

If 'needle' string is empty, returns 'haystack' string.

iterates through the 'haystack' string 
	with a while loop until either a 
		null character is encountered or 'i' is equal to 'len'.

Within loop, if the character at position 'i'
	in the 'haystack' string is equal to the first character 
		of the 'needle' string, then function enters 
			another loop to compare the subsequent characters of 
				the 'needle' string with the characters of 
					the 'haystack' string starting from 'i'.

If all characters of 'needle' string match 
	the characters of 'haystack' string 
		within the bounds of 'len', thenfunction 
			returns the starting address of the matching substring.

If no match, function increments 'i' and the loop continues.

If loop terminates without finding a match, function returns NULL.

similar to ft_strstr function, 
but ft_strnstr function is limited by the 'len' parameter, 
which restricts the number of characters to be searched
*/