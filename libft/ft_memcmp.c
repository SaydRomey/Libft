/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:12:05 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:40:52 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && *d1 == *d2)
	{
		d1++;
		d2++;
	}
	return ((int)(*d1 - *d2));
}

// int	main(void)
// {
// 	char	str1[] = "0ello there";
// 	char	str2[] = "ZELLO THERE";
// 	int		result1;
// 	int		result2;
// 	int		result3;

// 	result1 = ft_memcmp(str1, str2, 5);
// 	result2 = ft_memcmp(str1, str2, 11);
// 	result3 = ft_memcmp(str2, str1, 11);
// 	printf("\nnResult 1 (should be positive): %d\n", result1);
// 	printf("\nnResult 1 (should be negative): %d\n", result2);
// 	printf("\nnResult 1 (should be negative): %d\n", result3);
// 	return (0);
// }
//

/*
compare the first 'n' bytes of memory area 's1' and 's2'

s1 : pointer to first block of memory
s2 : pointer to first block of memory
n  : number of bytes to be compared

cast the 's1' and 's2' pointers to unsigned char *,
	so that the contents of the memory regions can be accessed as arrays of bytes.

then, check if 'n' is zero, if so, return 0
	indicating that both memory regions are equal.

next, use a while loop to compare contents of 's1' and 's2'
	byte by byte.

loop continues until either 'n' is zero or difference is found
	(inside loop, pointers are incremented to access the next bytes)

when the loop finishes, function returns the differemce between 
	the two last bytes that were compared, cast to an int.

if the two memory blocks are equal, returns 0
otherwise returns either
	a positive value 
		(first non-equal byte in 's1' is greater than corresponding byte in 's2')
or	a negative value 
		(first non-equal byte in 's1' is smaller than corresponding byte in 's2')
*/