/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:47:50 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 17:46:06 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}

/*
#include "ft_strchr.c"

int	main(void)
{
	char	str[] = "Hello there !";
	char	*result1 = ft_strrchr(str, 'e');
	char	*esult1 = ft_strchr(str, 'e');
	char	*result2 = ft_strrchr(str, 'z');

	printf("\nStr : %s\n", str);
	printf("\nResult 1 (should be 'e') : %c\n", *result1);
	printf("\nft_strrchr finds at %p\n", result1);
	printf("ft_strchr  finds at %p\n", esult1);
	printf("\nResult 2 (should be null) : %p\n", result2);
	return (0);
}
*/