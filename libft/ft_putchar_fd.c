/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:33:10 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:42:29 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	ssize_t	err;

	err = write(fd, &c, 1);
	if (err == -1)
		return ;
}

// int	main(void)
// {
// 	char	c = 'Z';

// 	ft_putchar_fd(c, 1);
// 	return (0);
// }
//

/*
to test in terminal :
	./a.out > output.txt
	cat output.txt
*/

/*
output char 'c' to given file descriptor

c	: char to output
fd	: file descriptor on which to write

ssize_t : signed size_t to be able to represent '-1'

write 'c' to 'fd' with argumenets;
	'fd', adress of 'c', and nmbr of char to write
return value of write is stored in 'err'

check if err is = to -1
	if it is, return without doing anything
if not,
	continue to the end and return implicitly
*/