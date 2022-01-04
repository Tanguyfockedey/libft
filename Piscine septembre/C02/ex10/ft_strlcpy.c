/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:19:58 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/22 18:20:00 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i++] = '\0';
	dest[size - 1] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char	src[] = "Strlcpy";
	char	dest1[15] = "0123456789";
	char	dest2[15] = "0123456789";
	int		size = 0;

	while (size < 10)
	{
	printf("%s\t%zu\n", dest1, strlcpy(dest1, src, size));
	printf("%s\t%d\n\n", dest2, ft_strlcpy(dest2, src, size));
	size++;
	}
}
*/