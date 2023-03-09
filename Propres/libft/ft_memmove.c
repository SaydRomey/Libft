/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:28:25 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:35:29 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return ((char *)dst);
}

/*
#include "ft_memcpy.c"
#include "ft_strlcpy.c"
#include "ft_strlen.c"

int	main(void)
{
	char	*dst;
	char	*src;
	size_t	len;

	dst = "Hello there";
	src = "Replaced";
	len = 5;
	printf("\nBefore function\n\tsrc : %s\n\tdst : %s\n", src, dst);
	ft_memmove(&dst, &src, len);
	printf("\nAfter function\n\tsrc : %s\n\tdst : %s\n", src, dst);
	return (0);
}
*/