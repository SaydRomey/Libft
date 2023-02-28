/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:44:20 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 12:31:59 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
		if (*s++ == (char)c)
			return ((char *)s - 1);
	if ((char)c == '\0' && *s == '\0')
		return ((char *)s);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Hello there !";
// 	char	*result1 = ft_strchr(str, 'e');
// 	char	*result2 = ft_strchr(str, 'z');

// 	printf("\nStr : %s\n", str);
// 	printf("\nResult 1 (should be 'e') : %c\n", *result1);
// 	printf("\nResult 2 (should be null) : %p\n", result2);
// 	return (0);
// }

/*
increment pointer 's' in while loop condition
	so that it points to the next char in the string

check if current char is equal to given char 'c'
	and returns a pointer to the current char if it is

if the end of string is reached and 'c' is the null char,
	a pointer to the null char is returned

if 'c' is not the null char and the end of the string is reached
	a null pointer is returned
*/