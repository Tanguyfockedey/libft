/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:05:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 17:05:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *block, size_t size)
{
	unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = block;
	while(size-- > 0)
	{
		ptr[i++] = '0';
	}
}

/*
#include <stdio.h>
int main(void)
{
	char str[] = "This is a string to be erased !\n";

	printf("%s", str);
	ft_bzero(str, 20);
	printf("%s", str);
}
*/