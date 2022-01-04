/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:27:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/18 10:27:50 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		i;

	length = ft_strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "This is a string";
	char *str2;

	str2 = ft_strdup(str);
	printf("%s\n%s\n", str, str2);
	printf("%s\n", ft_strdup(""));
	printf("%s\n", ft_strdup("this is\0 a test"));
}
*/