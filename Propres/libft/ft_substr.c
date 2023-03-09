/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:49:06 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:00:11 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (start + len > str_len)
		len = str_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include "ft_strdup.c"
#include "ft_memcpy.c"
#include "ft_strlen.c"

int	main(void)
{
	char	*str;
	char	*substr;
	int		index;

	str = "Test string";
	substr = ft_substr(str, 5, 8);
	printf("\nFound '%s' in '%s'\n", substr, str);
	index = ft_strlen(substr);
	printf("\nAt index %d\n", index);

	return (0);
}
*/