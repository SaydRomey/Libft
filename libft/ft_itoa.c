/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:16:29 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 18:04:54 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n);

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		int_length;

	num = (long)n;
	int_length = ft_int_len(n);
	str = (char *)malloc(int_length + 1);
	if (!str)
		return (NULL);
	if (num < 0)
		num = -num;
	str[int_length] = '\0';
	while (int_length--)
	{
		str[int_length] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

static int	ft_int_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int		num = 12345;
// 	char	*str = ft_itoa(num);

// 	if (str == NULL)
// 	{
// 		printf("\nMemory allocation failed\n");
// 		return(1);
// 	}
// 	printf("\n%d as a string : %s\n", num, str);
// 	free(str);
// 	return (0);
// }
//

/*
allocate with malloc and return a string
	representing the int recieved as argument.
		negative numbers must be handled.

n : int to convert to a string
str : pointer to string returned
num : long int holding absolute value of 'n'
int_length : int that holds the length of string that the function
	need to allocate for 'str'
		(calculated with int_length)

convert input int 'n' to a long int 'num'
	and then calculate length of string of 'n'
		by calling 'int_length' function.

dinamically allocate memory for a string of
	'int_length + 1' (for null term)
		and initialize it.

check if 'n' is negative, if so, 
	convert 'num' to its absolute value.

then loop through length of the string and populate the string
	with the digits of 'num' by repeatedly dividing 'num' by 10
		and adding the remainder 
			(obtained by taking the modulus of 'num' with 10)
				to the character '0'

finally, if 'n' was negative, the first character of the sring
	is set to '-' (to signify the number is negative)
		and the string is returned.

int_length;

n : integer whose length function needs to calculate
i : int used to count number of digits in 'n'

takes int 'n' as input and returns the number of digits in the int,
	by dividing the input int 'n' by 10 repeatedly,
		until 'n' becomes 0,
			and counting the number of divisions performed.
if 'n' is less than or equal to 0, 'i' is incremented by 1 before loop.
*/