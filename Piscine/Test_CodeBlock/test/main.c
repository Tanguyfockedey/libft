/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:23:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/21 22:23:49 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:39:28 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/22 08:39:29 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	else
		unb = nb;
	if (unb > 9)
	{
		ft_putnbr(unb / 10);
		unb = unb % 10;
	}
	ft_putchar('0' + unb);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}

}

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
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

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
	if (!(dest = malloc((length + 1) * sizeof(char))))
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

	if(!(s_stock = malloc((ac + 1) * sizeof(t_stock_str))))
		return (0);
	s_stock[ac].size = 0;
	s_stock[ac].str = 0;
	s_stock[ac].copy = 0;
	i = 0;
	while (i < ac)
	{
		s_stock[i].size = ft_strlen(av[i]);
		s_stock[i].str = av[i];
		if (!(s_stock[i].copy = ft_strdup(s_stock[i].str)))
			return (NULL);
		i++;
	}
	return (s_stock);
}

#include <stdio.h>
int	main(void)
{
	int			ac = 4;
	char		*strs[4];
	char		*str0 = "My name is Tanguy";
	char		*str1 = "I am 25 yo";
	char		*str2 = "and my hobbies are :";
	char		*str3 = "Music, gaming, dancing";
	t_stock_str	*s_stock;

    printf("%lu", sizeof(t_stock_str));
	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	strs[3] = str3;
	s_stock = ft_strs_to_tab(ac, strs);
	ft_show_tab(s_stock);
}
