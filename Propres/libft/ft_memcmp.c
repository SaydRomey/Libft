/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:12:05 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:35:10 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}

/*
int	main(void)
{
	char	str1[] = "hello T there";
	char	str2[] = "hello * there";
	int		result1;
	int		result2;
	int		result3;

	result1 = ft_memcmp(str1, str2, 6);
	result2 = ft_memcmp(str1, str2, 11);
	result3 = ft_memcmp(str2, str1, 11);
	printf("\nResult 1 (should be zero): %d\n", result1);
	printf("\nResult 1 (should be positive): %d\n", result2);
	printf("\nResult 1 (should be negative): %d\n", result3);
	return (0);
}
*/