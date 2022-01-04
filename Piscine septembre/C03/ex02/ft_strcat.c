/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:51:10 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/12 12:51:11 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest [100] = "This is a ";
	char	src[] = "test string !";
	char	dest1 [100] = "This is a ";
	char	src1[] = "test string !";

	printf("%s\n%s\n", dest, src);
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
}
*/