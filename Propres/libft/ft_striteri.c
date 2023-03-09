/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:24:29 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 16:10:51 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	if (s && f)
		while (*(s + ++i))
			f(i, s + i);
}

/*
void	print_char_index(unsigned int index, char *c)
{
	printf("\nChar at index %d is %c", index, *c);
}

int	main(void)
{
	char	str[] = "Hello there !";

	ft_striteri(str, &print_char_index);
	return (0);
}
*/