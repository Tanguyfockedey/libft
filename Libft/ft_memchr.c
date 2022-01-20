/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:32:05 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/20 16:57:25 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function finds the first occurrence of the byte c (converted to an 
	unsigned char) in the initial size bytes of the object beginning at block. 
	The return value is a pointer to the located byte, or a null pointer if no 
	match was found.
*/

#include <stddef.h>

void	*ft_memchr(const void *block, int c, size_t size)
{
	char	*memory;
	size_t	i;

	memory = (char*)block;
	i = 0;
	while(i < size)
	{
		if(c == memory[i])
			return(&memory[i]);
		i++;
	}
	return(0);
}
