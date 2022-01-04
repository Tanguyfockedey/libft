/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:26:16 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/06 11:26:19 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_ab(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (++b <= 99)
	{
		ft_print_ab(a / 10 + '0', a % 10 + '0', b / 10 + '0', b % 10 + '0');
		if (b == 99)
		{
			a++;
			b = a;
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/