/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:01:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 16:05:57 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
#include "ft_putstr_fd.c"
#include "ft_putchar_fd.c"
#include "ft_strlen.c"

int	main(void)
{
	char	c = 'Z';

	ft_putchar_fd(c, 1);
	return (0);
}
*/

/*
to test in terminal :
	./a.out > output.txt
	cat output.txt
*/