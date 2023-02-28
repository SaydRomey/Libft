/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:08 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:27:27 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr_items, size_t element_size)
{
	void	*ptr;

	ptr = malloc(nbr_items * element_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nbr_items * element_size);
	return (ptr);
}

// int	main(void)
// {
// 	int	i;
// 	int	n;
// 	int	*a;

// 	i = 0;
// 	printf("Number of elements to be entered: ");
// 	scanf("%d", &n);
// 	a = (int *) calloc(n, sizeof(int));
// 	printf("Enter %d numbers:\n", n);
// 	while (i < n)
// 	{
// 		scanf("%d", &a[i]);
// 		i++;
// 	}
// 	printf("The numbers entered are: ");
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%d ", a[i]);
// 		i++;
// 	}
// 	free(a);
// 	return (0);
// }
//

/*
ft_malloc allocates specified amount of memory and
	then initializes it to zero.

function returns a void pointer to this memory locations,


nitems : number of elements to be allocated

element size : size of each element in bytes

declare a void pointer 'ptr' th hold the adress of the allocated memory.

call 'malloc' function to allocate memory block 
	of size "nbr_items * element_size" bytes.

check if memory allocation was successful by comparing
	'ptr' to 'NULL'.
If 'ptr' is 'NULL', the memory allocation failed,
	return 'NULL' to indicate failure.

if successful, call 'ft_bzero' to set all the bytes in allocated memory to 0

finally, return the pointer to the allocated memory.
*/