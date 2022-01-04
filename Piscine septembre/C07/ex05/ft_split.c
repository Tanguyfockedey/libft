/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:34:54 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/20 10:34:59 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i + j + 1]);
			j++;
		}
		i++;
	}
	return (NULL);
}

char	*ft_stralloc_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	char			*str2;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				str2 = malloc((i + 1) * sizeof(char));
				return (str2);
			}
			j++;
		}
		i++;
	}
	str2 = malloc((i + 1) * sizeof(char));
	return (str2);
}

char	*ft_strcpy_strstr(char *str, char *to_find, char *dest)
{
	unsigned int	i;
	unsigned int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				dest[i] = '\0';
				return (&str[i + j + 1]);
			}
			j++;
		}
		i++;
	}
	dest[i] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*temp;
	int		i;

	i = 1;
	temp = str;
	while (temp != NULL)
	{
		temp = ft_strstr(temp, charset);
		i++;
	}
	result = malloc((i + 1) * sizeof(int));
	result[i] = NULL;
	i = 0;
	temp = str;
	while (ft_strstr(temp, charset) != NULL)
	{
		result[i] = ft_stralloc_strstr(temp, charset);
		temp = ft_strcpy_strstr(temp, charset, result[i]);
		i++;
	}
	result[i] = ft_stralloc_strstr(temp, charset);
	temp = ft_strcpy_strstr(temp, charset, result[i]);
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "this is the string which is to split ! is it so ?";
	char	charset[] = "e!";
	char	**result;
	int     i = 0;

	result = ft_split(str, charset);
	while (result[i] != NULL)
        printf("%s\n", result[i++]);
}
*/