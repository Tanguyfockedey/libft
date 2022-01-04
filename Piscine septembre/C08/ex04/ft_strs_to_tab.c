/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:18:42 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/21 22:18:43 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_stock;
	int			i;

	s_stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (!s_stock)
		return (NULL);
	s_stock[ac].size = 0;
	s_stock[ac].str = 0;
	s_stock[ac].copy = 0;
	i = 0;
	while (i < ac)
	{
		s_stock[i].size = ft_strlen(av[i]);
		s_stock[i].str = av[i];
		s_stock[i].copy = ft_strdup(s_stock[i].str);
		if (!s_stock[i].copy)
		{
			free(s_stock);
			return (NULL);
		}
		i++;
	}
	return (s_stock);
}

/*
#include <stdio.h>
void	ft_show_tab(struct s_stock_str *par);
int	main(void)
{
	int			ac = 4;
	char		*strs[4];
	char		*str0 = "My name is Tanguy";
	char		*str1 = "I am 25 yo";
	char		*str2 = "and my hobbies are :";
	char		*str3 = "Music, gaming, dancing";
	t_stock_str	*s_stock;

	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	strs[3] = str3;
	s_stock = ft_strs_to_tab(ac, strs);
	s_stock[1].copy[5] = '3';
	ft_show_tab(s_stock);
}
*/