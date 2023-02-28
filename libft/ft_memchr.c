/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:16:44 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:40:41 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		if (*str++ == (unsigned char)c)
			return (str - 1);
	return (NULL);
}

// int main(void)
// {
//     char str[] = "Hello, there !";
//     char c = 'e';
//     void *result = ft_memchr(str, c, strlen(str));
//     if (result != NULL)
// {
//    	 printf("\nFound char : %c\nAt index   : %ld\n", c, (char*)result - str);
//     } else {
//    	 printf("\nCould not find %c in string.\n", c);
//     }
//     return 0;
// }
//

/*
searches for the first occurrence of the character argument
    in the first size bytes of the memory block pointed to by str.

The function takes in three arguments:

str: a pointer to the memory block to be searched.
argument: an integer value that represents the character
    to be searched for, which is typecasted to an unsigned char.
size: the number of bytes to be searched.

The function first initializes a pointer s to an
    unsigned character typecasted version of str,
   	 and an index i to 0.

It then enters a while loop that continues
    until i is less than size.

Within the loop, it checks if the value
    at the memory location s + i is equal to argument.

If it is, it returns a void pointer
    to the memory location s + i.

If not, it increments i and continues the loop.

If the function reaches the end of the memory block
    without finding the character argument, it returns NULL.

Overall, this function searches for a specific character
    within a block of memory and returns a pointer
   	 to the location of the first occurrence of that character.

(main)

This main function defines a string str and a character c,
    and then uses ft_memchr to search for
   	 the character c within the string str.

If the function finds the character,
    it prints out a message that includes
   	 the character and its index within the string.

If the function does not find the character,
    it prints out a message saying so.

Note that we're using strlen(str) as the size parameter
    to ft_memchr to ensure that the function only searches
   	 within the actual length of the string.
*/