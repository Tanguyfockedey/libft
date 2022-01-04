/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:55:57 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/19 11:55:58 by tfockede         ###   ########.fr       */
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

char	*ft_emptystring(void)
{
	char	*str;

	str = malloc(1 * sizeof(char));
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	int		size_sep;
	char	*dest;

	length = 0;
	i = 0;
	if (size < 1)
		return (ft_emptystring());
	while (i < size)
		length = length + ft_strlen(strs[i++]);
	size_sep = (size - 1) * ft_strlen(sep);
	dest = malloc((length + size_sep + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
	}
	return (dest);
}


#include <stdio.h>
int	main(void)
{
	char	*join1;
	char	*join2; 
	char	*strs[3];
	char	*str0 = "0abc++";
	char	*str1 = "1abcdfgdsfg";
	char	*str2 = "2abcd";
	char	*sep = " ;_; ";

	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	
	printf("%s\t%s\t%s\t%s\n", strs[0], strs[1], strs[2], sep);
	join1 = ft_strjoin(0, strs, sep);
	join2 = ft_strjoin(3, strs, sep);
	printf("%s\n", join1);	
	printf("%s\n", join2);
	free(join1);
	free(join2);
}
