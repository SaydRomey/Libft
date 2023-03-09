/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:22:24 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:16:50 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include "ft_memset.c"

int	main(void)
{
	char	str[50];
	size_t	len;

	strcpy(str, "Hello there");
	len = strlen(str);
	printf("\nbefore ft_bzero : %s\n", str);
	ft_bzero(str, len);
	// bzero(str, len);
	printf("\nafter ft_bzero : %s\n", str);
	return (0);
}
*/