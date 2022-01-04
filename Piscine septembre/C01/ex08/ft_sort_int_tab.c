/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:24:50 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/09 11:24:51 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	j = 0;
	while (++j < size)
	{
		i = 0;
		while (i < size - j)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {9, 0, 3, 6, 8, 4, 12, 12, 1, 0};
	int size;
	int i;

	size = 10;
	i = 0;
	while (i < size)
		printf("%d ", tab[i++]);
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
		printf("%d ", tab[i++]);
}
*/