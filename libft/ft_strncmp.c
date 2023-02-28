/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:55:29 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 17:59:06 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		if (*p1 == '\0')
			return (0);
		p1++;
		p2++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		n;

// 	n = 5;
// 	s1 = "Hello there";
// 	s2 = "Hell0 there";
// 	printf("\n\t\tComparison of :\n\n%s <and> %s\n", s1, s2);
// 	printf("\n\t\twith n set at : %d\n", n);
// 	printf("\nft_strncmp says : %d\n", ft_strncmp(s1, s2, n));
// 	printf("\nstrncmp says : %d\n", strncmp(s1, s2, n));
// 	return (0);
// }
// 