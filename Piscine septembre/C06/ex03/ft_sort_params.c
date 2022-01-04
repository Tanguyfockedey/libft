/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:17:49 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/16 11:17:50 by tfockede         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	equals;

	equals = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		equals = s1[i] - s2[i];
		if (equals != 0)
			return (equals);
		i++;
	}
	equals = s1[i] - s2[i];
	return (equals);
}

void	ft_sort_tab_tab_char(char *tab[], int size)
{
	int		i;
	int		j;
	char	*swap;

	j = 0;
	while (++j < size)
	{
		i = 0;
		while (i < size - j)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_tab_tab_char(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
