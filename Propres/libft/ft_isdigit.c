/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:44:53 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:06:33 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int	main(void)
{
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = '8';
	c = '$';
	if (ft_isdigit(a))
		printf("\n%c is a digit.\n", a);
	else
		printf("\n%c is not a digit.\n", a);
	if (ft_isdigit(b))
		printf("\n%c is a digit.\n", b);
	else
		printf("\n%c is not a digit.\n", b);
	if (ft_isdigit(c))
		printf("\n%c is a digit.\n", c);
	else
		printf("\n%c is not a digit.\n", c);
	return (0);
}
*/