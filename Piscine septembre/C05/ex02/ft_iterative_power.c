/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:43:07 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/15 12:43:08 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = power;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb 		= 0;
	int power = -2;

	while (power <= 5)
	{
		printf("%d ^ %d = %d\n", nb, power, ft_iterative_power(nb, power));
		power++;
	}
}
*/