/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:46:10 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:46:15 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	ssize_t	err;

	len = ft_strlen(s);
	err = write(fd, s, len);
	if (err == -1)
		err = 0;
}

// #include "ft_strlen.c"

// int	main(void)
// {
// 	char	*s = "Hello there !";

// 	ft_putstr_fd(s, STDOUT_FILENO);
// 	return (0);
// }

/*
s  : string to output
fd : file descriptor on wich to write

calculate length of string 's'
	using 'ft_strlen'
store result in variable 'len'

write 's' to 'fd' with length 'len'

result of write stored in 'err'

if write returns -1 (error)
	'err' is reset to 0
*/

// #include <fcntl.h>
// #include <sys/stat.h>
// #include "ft_strlen.c"

// int	main(void)
// {
// 	char	*s = "Hello there !";
// 	int 	fd = open("output.txt", 
// 	O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
// 	ft_putstr_fd(s, fd);
// 	close(fd);
// 	return (0);
// }

/*
with <fcntl.h> and <sys/stat.h>

O_WRONLY : opens or creates a write-only file
O_CREAT  : if pathname does not exist, create it as regular file
O_TRUNC  : if file exists, is regular, and acces allows writing
	will be truncated to length 0
S_IRUSR  : read permission for owner of file
S_IWUSR  : write permission for owner of the file
*/