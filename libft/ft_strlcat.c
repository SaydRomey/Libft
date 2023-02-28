/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:36:17 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:52:31 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < size)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}

// void	test(int i)
// {
// 	char	dst[20] = "Hello";
// 	char	src[] = " there !";
// 	size_t	size = i;
// 	size_t	len;

// 	printf("\nSrc : %s\nDst : %s\n", src, dst);
// 	len = ft_strlcat(dst, src, size);
// 	printf("\nString length : %zu\n", len);
// 	printf("\nWith size at : %zu\n", size);
// 	printf("\nDst becomes : %s\n", dst);
// }
// #include "ft_strlen.c"
// int	main(void)
// {
// 	test(6);
// 	return (0);
// }
//

/*
dsize : current length of 'dest' string
i : counter

concatenate 'src' string onto the end of 'dest' string
	(sum of the lengths of 'src' and the original 'dest' string)

return the total length of concatenated string

if size of 'dest' buffer is not large enough
	to fit both string, the result may not be null terminated..
*/