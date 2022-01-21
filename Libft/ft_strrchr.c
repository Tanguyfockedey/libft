/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:31:20 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/21 15:57:30 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function strrchr is like strchr, except that it searches backwards from
	the end of the string string (instead of forwards from the front).
*/

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	while(i > 0)
	{
		if((char)c == str[i])
			return((char*)&str[i]);
		i--;
	}
	if((char)c == str[0])
		return((char*)&str[0]);
	return(0);
}
