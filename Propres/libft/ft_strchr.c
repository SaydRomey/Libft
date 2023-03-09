/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:44:20 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 17:09:02 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "Hello there !";
	char	*result1 = ft_strchr(str, 'e');
	char	*result2 = ft_strchr(str, 'z');

	printf("\nStr : %s\n", str);
	printf("\nResult 1 (should be 'e') : %c\n", *result1);
	printf("\nFound at %p\n", result1);
	printf("\nResult 2 (should be null) : %p\n", result2);
	return (0);
}
*/