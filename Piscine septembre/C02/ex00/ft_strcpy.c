/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:07:59 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/09 16:08:00 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "String to be sent";
	char	dest[] = "This is a test string which is longer";

	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", dest+18);
}
*/