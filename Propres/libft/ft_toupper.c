/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:40:12 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:01:30 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
int	main(void)
{
	char	lwrcase;
	char	uprcase;

	lwrcase = 'a';
	uprcase = 'Z';
	printf("\nLowercase char : %c\nUppercase char : %c\n", lwrcase, uprcase);
	printf("\nAfter function;\n");
	printf("\nLowercase char : %c\n", ft_toupper(lwrcase));
	printf("Uppercase char : %c\n", ft_toupper(uprcase));
	return (0);
}
*/