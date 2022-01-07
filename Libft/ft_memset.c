/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:26:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 15:26:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *block, int c, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = block;
	while(size-- > 0)
	{
		ptr[i++] = c;
	}
	return (block);
}

/*
#include <stdio.h>
int main(void)
{
	char str[] = "This is a string to be erased !\n";

	printf("%s", str);
	ft_memset(str, '-', 20);
	printf("%s", str);
}
*/