/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:55:29 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:38:24 by cdumais          ###   ########.fr       */
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

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	n = 7;
	s1 = "Hello There";
	s2 = "Hello *here";
	printf("\n\n'%s' vs '%s'\n", s1, s2);
	printf("\nwith 'n' set at : %d\n", n);
	printf("\nft_strncmp : %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp	   : %d\n", strncmp(s1, s2, n));
	return (0);
}
*/