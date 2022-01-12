/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:33:09 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/12 14:12:31 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function allocates a block long enough to contain a vector of count 
	elements, each of size eltsize. Its contents are cleared to zero before 
	calloc returns.
*/

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t eltsize)
{
	char	*block;
	size_t	i;
	size_t	range;

	i = 0;
	range = count * eltsize;
	block = malloc(range);
	if (!block)
		return(0);
	while(i <= range)
	{
		block[i] = 0;
		i++;
	}
	return((void*)block);
}