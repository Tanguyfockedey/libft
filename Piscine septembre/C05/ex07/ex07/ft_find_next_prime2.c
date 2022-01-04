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

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);

	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}


#include <stdio.h>
int	main(void)
{
	int i = 0;

	while (i < 10000)
	{
	i++;
	printf("%d : %d\n", i, ft_find_next_prime(i));
	}
}
