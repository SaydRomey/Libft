/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:26:19 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:53:16 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	if (!s)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(new_str + i) = f(i, *(s + i));
	*(new_str + i) = '\0';
	return (new_str);
}

// char	f(unsigned int i, char c)
// {
// 	char	str;

// 	str = c + 3;
// 	return (str);
// }

// #include "ft_strlen.c"

// int	main(void)
// {
// 	char	str1[] = "abc";
// 	char	*str2;

// 	str2 = ft_strmapi(str1, *f);
// 	printf("\n%s\n", str2);
// }
//

/*
maps (i.e. applies a function to) 
	each character of a string s and 
		returns a newly allocated string

checks if s is NULL and returns NULL if it is.

allocates memory for the new string new_str 
	using the malloc function, where the size of the new string
		 is the length of the input string s plus one for the null terminator.

It initializes a counter i to -1 and starts a 
	loop that iterates over each character of the input string s.

In each iteration, the function f is applied to the 
	current character of s and the current value of i, 
		and the result is stored in the corresponding position of new_str.

The loop continues until all characters of s have been processed.

The null terminator is added to the 
	end of new_str by setting *(new_str + i) to '\0'.

Finally, function returns the newly allocated string new_str.

the caller of this function is responsible for 
	freeing the memory allocated by malloc when it is no longer needed
*/