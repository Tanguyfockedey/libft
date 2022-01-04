/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:27:38 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/15 18:27:40 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb, int sqrt)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i2;
	int	i;

	if (nb < 3)
		return (2);
	if (nb > 2147483629)
		return (2147483647);
	i = 1;
	i2 = 1;
	while (i2 < nb)
	{
		i++;
		i2 = i * i;
	}
	while (!ft_is_prime(nb, i))
		nb++;
	return (nb);
}


#include <stdio.h>
int	main(void)
{
	int i = 0;

	while (i < 1500000)
	{
	i++;
	printf("%d : %d\n", i, ft_find_next_prime(i));
	}
}
