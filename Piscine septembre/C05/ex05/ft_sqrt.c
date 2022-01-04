/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:08:10 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/15 17:08:11 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power > 0)
		result = nb;
	else
		result = 1;
	if (power > 1)
		result *= ft_recursive_power(nb, power - 1);
	return (result);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb && i <= 46340)
	{
		if (ft_recursive_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int i = -10;

	printf("La racine carrée de %d vaut %d !\n", 0, ft_sqrt(0));

	while (i <= 100)
	{
		if (ft_sqrt(i) != 0)
			printf("La racine carrée de %d vaut %d !\n", i, ft_sqrt(i));
		i++;
	}
}
*/