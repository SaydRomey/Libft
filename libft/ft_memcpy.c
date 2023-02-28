/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:25:46 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:41:03 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*d++ = *s++;
	return ((void *)dst);
}

// int	main(void)
// {
// 	char	dst[100];
// 	char	src[100];
// 	size_t	n;

// 	n = 8;
// 	strcpy(src, "1234567890");
// 	strcpy(dst, " ");
// 	printf("\nDst : %s\nSrc : %s\n", dst, src);
// 	printf("n : %lu\n", n);
// 	printf("\nft_memcpy;\nDst : %s\nSrc : %s\n",dst, ft_memcpy(dst, src, n));
// 	printf("\nmemcpy;\nDst : %s\nSrc : %s\n\n",dst, memcpy(dst, src, n));
// 	return (0);
// }
//

/*
Copy 'n' characters from
	memory area 'src' to memory area 'dst'

dst : pointer to the destination memory block
	where the source memory content will be copied to,
		type-casted to a pointer of type void*

src : pointer to the source data that needs to be copied,
	type-casted to a pointer of type void*

n : number of bytes that need to be copied

 starts by casting the void pointers 'dst' and 'src' to 
	unsigned char pointers 'd' and 's', respectively.

then check if both 'dst' and 'src are NULL pointers.
	if they are, function returns dst without making any changes to memory.

otherwise, use a while loop to iterate 'n' times
	and copy each byte from 'src' to 'dst' by dereferencing
		the 's' and 'd' pointers and assigning the value at 's' to 'd'.

finally, return 'dst', wich points to the beginning of the destination
	memory block that was copied to..
*/