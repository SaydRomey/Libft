/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:16:44 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:23:52 by cdumais          ###   ########.fr       */
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

/*
int main(void)
{
    char str[] = "Hello, there !";
    char c = 'e';
    void *result = ft_memchr(str, c, strlen(str));
    if (result != NULL)
{
   	 printf("\nFound char : %c\nAt index   : %ld\n", c, (char*)result - str);
    } else {
   	 printf("\nCould not find %c in string.\n", c);
    }
    return 0;
}
*/