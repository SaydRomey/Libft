/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:36:17 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:13:51 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && dstlen + i + 1 < dstsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
void	test(int i)
{
	char	dst[20] = "Hello";
	char	src[] = " there !";
	size_t	size = i;
	size_t	len;

	len = ft_strlen(dst);
	printf("\nSrc : %s\nDst : %s\n", src, dst);
	printf("'Dst' length : %zu\n", len);
	len = ft_strlcat(dst, src, size);
	printf("\nWith ft_strlcat set at : %zu\n", size);
	printf("\nSrc : %s\nDst : %s\n",src, dst);
	printf("'Dst' length becomes : %zu\n", len);
}
#include "ft_strlen.c"

int	main(void)
{
	test(12);
	return (0);
}
*/