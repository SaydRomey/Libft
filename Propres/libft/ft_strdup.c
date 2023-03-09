/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:15:34 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 17:13:09 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len);
	if (str)
		ft_memcpy(str, s1, len);
	return (str);
}

/*
#include "ft_memcpy.c"
#include "ft_strlen.c"

int	main(void)
{
	char	*str;
	char	*result;

	str = "Hello there !";
	// result = strdup(str);
	// printf("\nstrdup : %s\n", result);
	result = ft_strdup(str);
	printf("\nft_strdup : %s\n", result);
	free(result);
	return (0);
}
*/