/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:47:18 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:06:16 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}

/*
int	main(void)
{
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = u'¢';
	c = '$';
	if (ft_isascii(a))
		printf("\n%c is ASCII.\n", a);
	else
		printf("\n%c is not ASCII.\n", a);
	if (ft_isascii(b))
		printf("\n%c is ASCII.\n", b);
	else
		printf("\n%c is not ASCII.\n", b);
	if (ft_isascii(c))
		printf("\n%c is ASCII.\n", c);
	else
		printf("\n%c is not ASCII.\n", c);
	return (0);
}
*/