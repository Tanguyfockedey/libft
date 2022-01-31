/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:39:17 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/31 19:52:34 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlcat() function concatenates strings. It is designed to be safer, 
	more consistent, and less error prone replacements for strncat(). 
	Unlike this function, strlcat() takes the full size of the buffer (not just 
	the length) and guarantee to NUL-terminate the result (as long as there is 
	at least one byte free in dst). 
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	if (!size)
		return (ft_strlen(src));
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	else
		result = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (result);
}

/*
//#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
//	char	dest1 [20]= "01234";
	char	dest2 [20]= "01234";
	char	src[] = "abc";
	unsigned int	i = 10;
//	unsigned int	out1;
	unsigned int	out2;

//	out1 = strlcat(dest1, src, i);
//	printf("%s\t%d\n", dest1, out1);
	out2 = ft_strlcat(dest2, src, i);
	printf("%s\t%d\n\n", dest2, out2);

}
*/