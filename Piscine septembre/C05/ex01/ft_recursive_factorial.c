/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:49:20 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/15 10:49:21 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	
	while (i <= 12)
	{
		printf("!%d = %d\n", i, ft_recursive_factorial(i));
		i++;
	}
}
*/