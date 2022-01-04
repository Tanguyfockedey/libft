/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:58:16 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/09 10:58:16 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int size;
	int i;

	size = 16;
	i = 0;
	while (i < size)
		printf("%d ", tab[i++]);
	ft_rev_int_tab(tab, size);
	printf("\n");
	i = 0;
	while (i < size)
		printf("%d ", tab[i++]);
}
*/