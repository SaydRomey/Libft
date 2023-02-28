/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:11:27 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/15 17:40:31 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "Hell0 there !";
// 	printf("String : %s\nLength : %lu\n", s, ft_strlen(s));
// 	return (0);
// }
// 