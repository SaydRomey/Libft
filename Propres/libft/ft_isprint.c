/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:08:51 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:07:07 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 040 && c <= 0176);
}

/*
int	main(void)
{
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = '$';
	c = '\n';
	if (ft_isprint(a))
		printf("\n%c is printable\n", a);
	else
		printf("\n%c is not printable\n", b);
	if (ft_isprint(b))
		printf("\n%c is printable\n", b);
	else
		printf("\n%c is not printable\n", b);
	if (ft_isprint(c))
		printf("\n%c is printable\n", c);
	else
		printf("\n%c is not printable\n", (unsigned char) c);
	return (0);
}
*/