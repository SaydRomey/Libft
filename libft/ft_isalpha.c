/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:42:38 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/15 17:37:12 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	a;
// 	char	b;
// 	char	c;

// 	a = 'a';
// 	b = '8';
// 	c = '$';
// 	if (ft_isalpha(a))
// 		printf("\n%c is alpha.\n", a);
// 	else
// 		printf("\n%c is not alpha.\n", a);
// 	if (ft_isalpha(b))
// 		printf("\n%c is alpha.\n", b);
// 	else
// 		printf("\n%c is not alpha.\n", b);
// 	if (ft_isalpha(c))
// 		printf("\n%c is alpha.\n", c);
// 	else
// 		printf("\n%c is not alpha.\n", c);
// }
// 