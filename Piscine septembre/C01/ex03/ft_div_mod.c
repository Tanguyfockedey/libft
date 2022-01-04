/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:44:40 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/08 12:44:42 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 23;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d rest %d",a , b, div, mod);
}
*/