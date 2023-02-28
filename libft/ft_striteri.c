/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:24:29 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:52:16 by cdumais          ###   ########.fr       */
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

// void	print_char_index(unsigned int index, char *c)
// {
// 	printf("\nChar at index %d is %c", index, *c);
// }

// int	main(void)
// {
// 	char	str[] = "Hello there !";

// 	ft_striteri(str, &print_char_index);
// 	return (0);
// }

/*
s : pointer to string
f : function pointer

check that 's' and 'f' are not null pointers
	if they are, return without doing anything

while loop to traverse each char in the string
	untill null char is reached

for each iteration, call function pointed to by 'f'
	with two arguments;
			i 	: index of the character
		s + i 	: pointer to the char

++i : increments the value of 'i' after it is
	used as an argument to 'f'

after all char have been processed, loop ends, and
	the function returns

*function does not allocate or free any memory
	simply calls the function 'f' for each char in the string 's'
*/