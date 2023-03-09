/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:33:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 16:01:50 by cdumais          ###   ########.fr       */
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

/*
int	main(void)
{
	char	str[50];

	strcpy(str, "Hello there");
	printf("\nWith memset : %s\n", memset(str, '#', 5));
	printf("\nWith ft_memset : %s\n", ft_memset(str, '#', 5));
	return (0);
}
*/