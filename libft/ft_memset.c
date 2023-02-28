/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:33:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:41:53 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len--)
		*str++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char	str[50];

// 	strcpy(str, "Hello there");
// 	printf("With memset : %s\n", memset(str, '#', 5));
// 	printf("\nWith ft_memset : %s", ft_memset(str, '#', 5));
// 	return (0);
// }
//

/*
memset : fill a block of memory with a specific value.

s: pointer to memory block that needs to be filled
c: value that needs to be filled in the memory block
len: the number of bytes that need to be filled in the memory block.

function starts by casting the void pointer 's' 
to an unsigned char pointer 'str',
as the value of c is of type 'int' and 
needs to be converted to an 'unsigned char' to store it in memory.

function then uses a while loop to iterate 'len' times,
and sets each byte of the memory block to the value of 'c' by
dereferencing the 'str' pointer and assigning it the value of 'c' to it.

the function finally returns the original 's' pointer, 
wich points to the beginning of
the memory block that was filled...
*/