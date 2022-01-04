/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:32:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/14 09:32:50 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checkbase(char *base, unsigned int *baselength)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	*baselength = i;
	while (--i > 0)
	{
		j = i;
		while (--j >= 0)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (!0);
}

void	ft_basechange(unsigned int unb, char *base, unsigned int baselength)
{
	if (unb > baselength - 1)
	{
		ft_basechange(unb / baselength, base, baselength);
		unb %= baselength;
	}
	ft_putchar(base[unb]);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	baselength;
	unsigned int	unb;

	if (ft_checkbase(base, &baselength) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		unb = -nb;
	}
	else
		unb = nb;
	ft_basechange(unb, base, baselength);
}

/*
int	main(void)
{
	int nb = 423836459;

	ft_putnbr_base(nb, "OI");
	ft_putchar('\n');
	ft_putnbr_base(nb, "aceloru ?");
	ft_putchar('\n');
	ft_putnbr_base(nb, "OlZEASdTBq");
	ft_putchar('\n');
	ft_putnbr_base(nb, "0123456789ABCDEF");
	ft_putchar('\n');
}
*/