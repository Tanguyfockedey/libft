/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:42:05 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/19 14:42:05 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the string ’s’ to the given file descriptor.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int fd;
	char *s = "This is a string !";

	fd = open("test.txt", O_RDWR | O_CREAT, S_IRWXU);
	printf("File descriptor is : %d\nString is : %s\n", fd, s);
	ft_putstr_fd(s, fd);
	close(fd);
}
*/