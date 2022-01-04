/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:32:38 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/07 13:32:44 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_absvalputsign(int nb)
{
	unsigned int	unb;

	if (nb < 0)
		write(1, "-", 1);
	if (nb < 0)
		unb = -nb;
	else
		unb = nb;
	return (unb);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	unb = ft_absvalputsign(nb);
	if (unb > 9)
	{
		ft_putnbr(unb / 10);
		unb = unb % 10;
	}
	ft_putchar('0' + unb);
}

/*
int	main(void)
{
	ft_putnbr(2147483647);
}
*/