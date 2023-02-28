/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:06:07 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:55:37 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	return (ft_substr(s1, 0, s1_len + 1));
}

// #include "ft_strchr.c"
// #include "ft_strlen.c"
// #include "ft_substr.c"
// #include "ft_calloc.c"
// #include "ft_bzero.c"
// 
// int	main(void)
// {
// 	char	str[] = "";
// 	char	set[] = "1 2 3 ";
// 	char	*trimmed = ft_strtrim(str, set);
// 
// 	printf("\nOriginal string : %s\n", str);
// 	printf("\nTrimmed string : %s", trimmed);
// 	free(trimmed);
// 	return (0);
// }
// 

/*
allocate with malloc and returns a copy of
	's1' with the characters specified in 'set'
		removed from beginning and end of the string.

s1 : string to be trimmed
s2 : reference set of characters to trim

check if either 's1' or 'set' is NULL,
	and return NULL if any of them is.

use 'ft_strchr' to locate first character in 's1' 
	that is not in 'set'
		keep incrementing pointer to 's1' until this condition is met.

then calculate lentgh of trimmed string,
	by substracting the number of trailing characters
		in 's1' that are in 'set'.

finally call 'ft_substr' to return a newly allocated string
	that is a copy of the trimmed string,
by passing 's1, 0' as the starting index and
	's1_len + 1' as length of substring to be extracted.
*/