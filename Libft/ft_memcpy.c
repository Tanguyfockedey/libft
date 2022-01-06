/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:15:11 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 17:15:11 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	char	*ptr1;
	const char	*ptr2;
	size_t	i;

	i = 0;
	ptr1 = to;
	ptr2 = from;
	while(size-- > 0)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return(to);
}

/*
#include <stdio.h>
int	main(void)
{
	char from[] = "This is a string to copy";
	char to[] = "..................<= to fill";

	printf("%s\n%s\n\n", from, to);
	ft_memcpy(to, from, 16);
	printf("%s\n%s\n\n", from, to);
}
*/