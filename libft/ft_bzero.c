/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:22:24 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:26:43 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}

// int	main(void)
// {
// 	char	str[50];
// 	size_t	len;

// 	strcpy(str, "Hello there");
// 	len = strlen(str);
// 	printf("\nbefore ft_bzero : %s\n", str);
// 	ft_bzero(str, len);
// 	// bzero(str, len);
// 	printf("\nafter ft_bzero : %s\n", str);
// 	return (0);
// }
//

/*
fill a block of memory with zeros.

s: a pointer to the memory block that needs to be filled with zeros.
n: the number of bytes to fill.

Function starts by casting the void pointer 's' 
	to an unsigned char pointer 'str'.

Then, the uses a while loop to iterate 'n' times, 
	and sets each byte of the memory block to zero by 
		dereferencing the 'str' pointer and assigning the value of '\0' to it.

After the loop has completed, the function returns without a value, 
	as the memory block has been filled with zeros
*/