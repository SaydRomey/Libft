/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:06:07 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:21:46 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*trimmed;
// 	size_t	start;
// 	size_t	end;

// 	if (!s1 || !set)
// 		return (NULL);
// 	start = 0;
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		start++;
// 	end = ft_strlen(s1);
// 		end--;
// 	trimmed = ft_substr(s1, start, end - start);
// 	return (trimmed);
// }
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	return (ft_substr(s1, 0, s1_len + 1));
}

/*
#include "ft_memset.c"
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_substr.c"
#include "ft_calloc.c"
#include "ft_bzero.c"

int	main(void)
{
	char	*str;
	char	*set;
	char	*trimmed;

	str = "*!1!2!3!*";
	set = "*!*";
	printf("\nOriginal string : %s\n", str);	
	printf("\nChar to trim : %s\n", set);
	trimmed = ft_strtrim(str, set);
	printf("\nTrimmed string : %s\n", trimmed);
	free(trimmed);
	return (0);
}
*/