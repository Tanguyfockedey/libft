/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:53:37 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/15 12:53:38 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		result = nb;
	if (power > 1)
		result = result * ft_recursive_power(nb, power - 1);
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
		printf("%d ^ %d = %d\n", nb, power, ft_recursive_power(nb, power));
		power++;
	}
}
*/