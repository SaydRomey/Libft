/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:28:25 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 18:50:29 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}

// int	main(void)
// {
// 	char	dest[50];
// 	char	*src;

// 	src = "Replaced !";
// 	dest = "To be replaced.."

// 	// strcpy(src, "replaced");
// 	// strcpy(dest, "hello there");
// 	printf("\nBefore function\nsrc :%s\ndest : %s\n", src, dest);
// 	ft_memmove(dest, src, 9);
// 	printf("\nAfter function\nsrc :%s\ndest : %s\n", src, dest);
// 	return (0);
// }

/*
copy memory from one area to another.

used to handle cases where the source and destination memory areas overlap. 

Unlike memcpy, which can lead to undefined behavior in such cases, 
	memmove is guaranteed to work correctly.

dst : pointer to the destination memory area
src : pointer to the source memory area 
len : number of bytes to be copied

casting of the 'dst' and 'src' pointers to unsigned char pointers, 
	and checks if either of them is NULL. 
		If either is NULL, the function returns 'dst'.

Next, checks if the source memory area is located 
	before the destination memory area in memory.

If it is, function copies the bytes from the end of the source memory area 
	to the end of the destination memory area. 

If not, function copies the bytes from the start of the source memory area 
	to the start of the destination memory area.

Returns a pointer to the destination memory area.
*/