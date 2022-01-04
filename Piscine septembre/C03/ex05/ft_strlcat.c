/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:39:17 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/23 13:11:17 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dest))
		result = size + ft_strlen(src);
	else
		result = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (result);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	dest1 [20]= "01234";
	char	dest2 [20]= "01234";
	char	src[] = "abc";
	unsigned int	i = 10;
	unsigned int	out1, out2;

	out1 = strlcat(dest1, src, i);
	printf("%s\t%d\n", dest1, out1);
	out2 = ft_strlcat(dest2, src, i);
	printf("%s\t%d\n\n", dest2, out2);

}
*/