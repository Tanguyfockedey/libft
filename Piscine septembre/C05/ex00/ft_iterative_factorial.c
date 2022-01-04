/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:02:13 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/15 10:02:16 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i <= 12)
	{
		printf("!%d = %d\n", i, ft_iterative_factorial(i));
		i++;
	}
}
*/