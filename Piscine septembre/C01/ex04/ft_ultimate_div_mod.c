/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:03:59 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/08 15:04:04 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int b;

	a = 23;
	b = 5;
	printf("%d / %d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d rest %d", a, b);
}
*/