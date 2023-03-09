/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:02:10 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 14:54:23 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	if (!str)
		return (0);
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

/*
int	main(void)
{
	int		value;
	char	str[20];

	strcpy(str, "-1234abc5678");
	value = atoi(str);
	printf("\nAtoi;\n");
	printf("\nString value : %s\nInt value	 : %d\n", str, value);
	strcpy(str, "-1234abc5678");
	value = ft_atoi(str);
	printf("\nft_atoi;\n");
	printf("\nString value : %s\nInt value	 : %d\n", str, value);
}
*/