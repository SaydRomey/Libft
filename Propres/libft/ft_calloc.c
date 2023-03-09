/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:08 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/07 12:40:42 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include "ft_bzero.c"
#include "ft_memset.c"

int	main(void)
{
	int	i;
	int	n;
	int	*a;

	i = 0;
	printf("Number of elements to be entered: ");
	scanf("%d", &n);
	a = (int *) calloc(n, sizeof(int));
	printf("Enter %d numbers:\n", n);
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	printf("The numbers entered are: ");
	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	return (0);
}
*/