/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:32:24 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:52:45 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// void	test(int i)
// {
// 	char		dst[i];
// 	const char	*src = "Hello there !";
// 	size_t		len;

// 	len = ft_strlcpy(dst, src, i);
// 	printf("\nString : %s\n", src);
// 	printf("\nString length : %zu\n", ft_strlen(src));
// 	printf("Length copied : %zu\n", len);
// 	printf("With buffer size : %d\n", i);
// 	if (i == 0)
// 		printf("\nCopied string : <empty>\n\n");
// 	else
// 		printf("\nCopied string : %s\n\n", dst);
// }

// #include "ft_strlen.c"
// int	main(void)
// {
// 	test(6);
// 	test(0);
// 	return (0);
// }
//

/*
dst: pointer to the destination string
src: pointer to the source string
dstsize: maximum number of characters to be copied to the destination string

first check if either of the pointers 'src' or 'dst' are NULL. 
If either is NULL, the function returns 0.

Next, if 'dstsize' is 0, return length of source string 
	(obtained using ft_strlen function), 
		without copying any characters.

Then use a loop to copy characters from the source string 'src'
	to the destination string 'dst', 
		until either the end of the source string is reached 
			(indicated by '\0') 
		or the maximum number of characters to be copied 
			(dstsize-1) has been reached.

Finally, add '\0' at the end of the destination string
	to indicate the end of the string, 
		and returns the length of the source string.
*/