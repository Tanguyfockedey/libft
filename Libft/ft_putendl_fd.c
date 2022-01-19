/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:10:53 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/19 15:10:53 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the string ’s’ to the given file descriptor, followed by a newline.
*/

#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
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
	ft_putendl_fd(s, fd);
	close(fd);
}
*/