/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:47:18 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:28:04 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}

// int	main(void)
// {
// 	char	a;
// 	char	b;
// 	char	c;

// 	a = 'a';
// 	b = u'¢';
// 	c = '$';
// 	if (ft_isascii(a))
// 		printf("\n%c is ASCII.\n", a);
// 	else
// 		printf("\n%c is not ASCII.\n", a);
// 	if (ft_isascii(b))
// 		printf("\n%c is ASCII.\n", b);
// 	else
// 		printf("\n%c is not ASCII.\n", b);
// 	if (ft_isascii(c))
// 		printf("\n%c is ASCII.\n", c);
// 	else
// 		printf("\n%c is not ASCII.\n", c);
// 	return (0);
// }
//

/*
ASCII range (nul to del)
	octal	: 000 to 0177
	hexa	: 00  to 7f
	decimal : 00  to 127
binary  : 000000  to 1111111

prefixes (before string literal)
	decimal	: default
	octal	: 0
	hexa	: 0x
	binar	: 0b

prefixes (for types of char)
	  'A': char		= 1 byte
	 u'A': char16_t	= 2 bytes
	 U'A': char32_t	= 4 bytes
	 L'A': wchar_t	= 4 bytes


Using '0177' to make it clear i am looking for
	ASCII char, not the highest possible value 
		of an 8 bit integer (127 in decimal)

the 'u' before the char b is a prefix to get a wider type
	of char.
*/