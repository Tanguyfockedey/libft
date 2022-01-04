/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:21:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/13 19:21:49 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	if (nb < 0)
		ft_putchar('-');
	if (nb < 0)
		unb = -nb;
	else
		unb = nb;
	if (unb > 9)
	{
		ft_putnbr(unb / 10);
		unb %= 10;
	}
	ft_putchar(unb + '0');
}


int	main(void)
{
	ft_putnbr(-2147483647);
}
*/