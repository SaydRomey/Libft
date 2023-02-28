/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:06:02 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:43:49 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + '0';
		ft_putchar_fd(c, fd);
	}
	if (n < 10)
	{
		c = n % 10 + '0';
		ft_putchar_fd(c, fd);
	}
}

// #include "ft_putstr_fd.c"
// #include "ft_putchar_fd.c"
// #include "ft_strlen.c"

// int	main(void)
// {
// 	int	n = 12345;

// 	ft_putnbr_fd(n, STDOUT_FILENO);
// 	return (0);
// }
//

/*
write an int to a file or any other stream
	that is represented by a file descriptor

if string is -2147483648
	write it using 'ft_putstr_fd'

if n is negative, write '-'
	negate 'n' to make it positive

check if 'n' is >= to 10
	function call recursively with argument 'n / 10'
		to write the most significant digits of 'n'

calculate remainder 'n % 10'
	add ASCII value of '0'
		write result using 'ft_putchar_fd'

if n < 10, calculate remainder 'n % 10'
	add ASCII value of '0'
		write result using 'ft_putchar_fd'

adding ascii value '0' ;
	ex, to convert int '7' to it's char representation,

remainder of 7 divided by 10 is 7,
	so adding the ASCII value '0' to 7 results in the
		char representation of '7'
			which is 55 (7 + 48)
by adding ASCII value '0' to each digit of an int,
	'ft_putnbr_fd' converts int into corresponding char representation
*/