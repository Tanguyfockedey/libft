/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:56:50 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 17:56:50 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //contains malloc and size_t

void	*ft_memmove(void *to, const void *from, size_t size)
{
	const char	*ptr1;
	char	*ptr2;
	char	*temp;
	size_t	i;

	ptr1 = from;
	ptr2 = to;
	temp = malloc(sizeof(char) * size);
	if(!temp) 
		return(0);
	i = 0;
	while(i < size)
	{
		temp[i] = ptr1[i];
		i++;
	}
	i = 0;
	while(i < size)
	{
		ptr2[i] = temp[i];
		i++;
	}
	free(temp);
	return(to);
}

/*
#include <stdio.h>
int	main(void)
{
	char from[] = "This is a string to copy";
	char to[] = "..................<= to fill";

	printf("%s\n%s\n\n", from, to);
	ft_memmove(to, from, 16);
	printf("%s\n%s\n\n", from, to);
}
*/