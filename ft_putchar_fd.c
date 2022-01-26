/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:35:27 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/18 17:35:27 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the character ’c’ to the given file descriptor.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int fd;
	char c = 'Z';

	fd = open("test.txt", O_RDWR | O_CREAT, S_IRWXO);
	printf("%d\n", fd);
	ft_putchar_fd(c, fd);
	close(fd);
}
*/
