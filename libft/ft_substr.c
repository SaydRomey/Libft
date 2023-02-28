/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:49:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:57:18 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	s_len;
	size_t	str_len;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len < start || len <= 0)
		return (ft_calloc(1, sizeof(char)));
	if (len < s_len - start)
		str_len = len;
	else
		str_len = s_len - start;
	str = ft_calloc(str_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < str_len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// #include "ft_calloc.c"
// #include "ft_strlen.c"
// #include "ft_bzero.c"

// int	main(void)
// {
// 	char	str[] = "Test string";
// 	char	*substr = ft_substr(str, 5, 8);

// 	printf("\nOriginal string : %s\n", str);
// 	printf("\nSubstring : %s\n", substr);
// }
//

/*
returns a new string that is a substring of a given string,
	starting from specified index and with specified length.

s : pointer to string from wich the substring is extracted.

start : unsigned int that specifies the starting index of
	substring within 's'.

len : size_t variable that specifies the length of the substring.

calculate the length of input string 's' with 'ft_strlen'

check if input string 's' is shorter than the specified 'start' index
	or if the requested length of substring is zero or negative.

if either of these conditions is true,
	returns a null-terminated string of length 0,
		by calling 'ft_calloc' with size of 1.

if requested substring length is greater than length of input string
	starting from the specified 'start' index,
		function adjusts the length of the substring to be the length
			of the input string starting from the specified start index.

function calls 'ft_calloc' to allocate memory for the new substring,
	and sets the length of the substring to 'str_len' + 1 (for null terminator).

function then copies the requested substring from the input string 's'
	to the new string 'str', stopping either 
		when requested length has been reached or
			when the end of the input string has been reached.

function then sets final byte of 'str' to '\0'

return a pointer to newly created substring.
*/