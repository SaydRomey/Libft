/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:02:10 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 19:11:49 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *str++ - '0';
	return (num * sign);
}

// int	main(void)
// {
// 	int		value;
// 	char	str[20];

// 	strcpy(str, "-1234abc5678");
// 	value = atoi(str);
// 	printf("\nAtoi;\n");
// 	printf("\nString value : %s\nInt value	 : %d\n", str, value);
// 	strcpy(str, "-1234abc5678");
// 	value = ft_atoi(str);
// 	printf("\nft_atoi;\n");
// 	printf("\nString value : %s\nInt value	 : %d\n", str, value);
// }

/*
takes a string 'str' as an input and returns an int representation of the string

num : used to store the resulting int
sign : used to keep track of the parity of the number

loop to skip whitespace char at beginning of string
if non-whitespace char is a '-', sing set to negative
if non-whitespace char is '-' or '+', str is incremented to
move to the next char.

loop to procees rest of string, continues as long as
the current char is between '0' and '9'.
for each iteration, num is multiplied by 10, and
the integer value of the char is added to num.
the str pointer is incremented after each iteration to
move to the next char.

finally num is multiplied by sign and returned as the result..

* takes a string representation of an integer and returns an actual integer * 
*/