/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:51:35 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 16:13:42 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		joined[i] = s2[i - len1];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}

/*
#include "ft_strlen.c"

int	main(void)
{
	char	str1[] = "This is a";
	char	str2[] = " test !";
	char	*result = ft_strjoin(str1, str2);

	printf("\ns1 : %s\n", str1);
	printf("\ns2 : %s\n", str2);
	printf("\nResult : %s\n", result);
	free(result);
	return (0);
}
*/