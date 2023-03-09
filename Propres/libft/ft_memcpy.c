/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:25:46 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:39:10 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return ((void *)dst);
}

/*
int	main(void)
{
	char	dst[100];
	char	src[100];
	size_t	n;

	n = 5;
	strcpy(src, "1234567890");
	strcpy(dst, " ");
	printf("\nParameters;\n");
	printf("\tDst : %s\n\tSrc : %s\n", dst, src);
	printf("\tn : %lu\n", n);
	printf("\nft_memcpy;\n\tDst : %s\n\tSrc : %s\n",dst, ft_memcpy(dst, src, n));
	printf("\nmemcpy;\n\tDst : %s\n\tSrc : %s\n",dst, memcpy(dst, src, n));
	return (0);
}
*/