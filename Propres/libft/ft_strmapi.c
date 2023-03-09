/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:26:19 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:14:41 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	*(new_str + i) = '\0';
	return (new_str);
}

/*
char	f(unsigned int i, char c)
{
	char	str;
	int		add;

	add = 3;
	str = c + add;
	return (str);
}

#include "ft_strlen.c"

int	main(void)
{
	char	str1[] = "abc";
	char	*str2;

	printf("\n'%s' becomes ", str1);
	str2 = ft_strmapi(str1, *f);
	printf("'%s'\n", str2);
}
*/