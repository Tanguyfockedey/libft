/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:27:16 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/18 12:27:17 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min < max)
	{
		i = 0;
		tab = malloc((max - min) * sizeof(int));
		if (!tab)
			return (0);
		while (i < max - min)
		{
			tab[i] = i + min;
			i++;
		}
		return (tab);
	}
	else
		return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	int	*tab1;
	int *tab2;
	int *tab3;
	int i;

	tab1 = ft_range(0, 0);
	printf("\n%p\n", tab1);
	tab2 = ft_range(-10, 10);
	i = 0;
	while (i < 20)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	tab3 = ft_range(10, -10);
	tab3 = ft_range(-2147483648, 2147483647);
}
*/