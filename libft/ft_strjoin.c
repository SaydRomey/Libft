/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:51:35 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 18:50:39 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ostr;
	size_t	len;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len = len_s1 + len_s2 + 1;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (len <= 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	ostr = str + len_s1;
	ft_memcpy(str, s1, len_s1);
	ft_memcpy(ostr, s2, len_s2);
	str[len - 1] = '\0';
	return (str);
}

// #include "ft_strlen.c"
// #include "ft_memcpy.c"

// int	main(void)
// {
// 	char	str1[] = "This is a";
// 	char	str2[] = " test !";
// 	char	*result = ft_strjoin(str1, str2);

// 	printf("\ns1 : %s\n", str1);
// 	printf("\ns2 : %s\n", str2);
// 	printf("\nResult : %s\n", result);
// 	free(result);
// 	return (0);
// }

/*
concatenate two strings into a single string

s1 : prefix string
s2 : suffix string

calculate length of both input strings with 'ft_strlen'

use malloc to allocate memory for new string,
	wich has length equal to the sum of
		the lengths of 's1' and 's2' plus one for '\0'.

check if either input strings is a NULL pointer,
	return NULL if so.

then copy contents of 's1' into newly allocated memory
	using ft_memcpy.

then copy the contents of 's2' into newly allocated memory,
	immediatly after the contents of 's1'.

finally add '\0' to end of string,
	and returns pointer to new string.

if memory allocation fails, returns NULL pointer
*/