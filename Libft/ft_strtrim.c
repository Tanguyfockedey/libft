/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:48:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/12 17:00:46 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a copy of ’s1’ with the characters specified in ’set’
	removed from the beginning and the end of the string.
*/

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_pretrim(const char *str, const char *set)
{
	
}

size_t	ft_endtrim(const char*str, const char *set)
{

}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*string;
	size_t	i;
	size_t	j;

	while(1)
	{
		j = 0;
		while(set[j])
		{
			
			j++;
		}
	}
	
}
