/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:41:56 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/19 14:48:18 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	lwrcase;
// 	char	uprcase;

// 	lwrcase = 'a';
// 	uprcase = 'Z';
// 	printf("\nLowercase char : %c\nUppercase char : %c\n", lwrcase, uprcase);
// 	printf("\nAfter function;\n");
// 	printf("\nLowercase char : %c\n", ft_tolower(lwrcase));
// 	printf("Uppercase char : %c\n", ft_tolower(uprcase));
// 	return (0);
// }
// 