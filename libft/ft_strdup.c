/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:15:34 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:51:59 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "Hello there !";
// 	result = strdup(str);
// 	printf("\nwith normal function : %s\n", result);
// 	result = ft_strdup(str);
// 	printf("\nwith custom function : %s\n", result);
// 	return (0);
// }
//

/*
function duplicates a string / takes a character pointer 'src' as input
	and returns a char pointer 'dup'

i 	: used to keep track of the index of the input string,
dup : character pointer that will point ti the new duplicated string.

allocate memory for the new duplicated string 'dup' using malloc

the size of the new string is determined by the length of
	the input string plus 1 to account for the null terminator character '\0'
		(obtained using ft_strlen)

the 'sizeof' operator is used to determine the size of a single character.

check if memory allocation was successful.

if 'dup' is NULL, means not enough memory available, 
	so function returns NULL to indicate an error.

While loop to copy each char from input string 'src' 
	to the new string 'dup' until end of input string is reached.

while loop continues until the condition 'src[i]' is false,
	wich mean null terminator char has been reached.

add a null terminator to the end of the new duplicated string to
	mark the end of the string.

return the new duplicated string 'dup'
*/