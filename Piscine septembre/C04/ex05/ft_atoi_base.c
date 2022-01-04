/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:38:53 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/14 11:38:58 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkbase(char *base, unsigned int *baselength)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
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

char	*ft_prestr(char *str, int *sign)
{
	unsigned int	i;

	*sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (&str[i]);
}

int	ft_find_inbase(char tofind, char *base, unsigned int baselength)
{
	unsigned int	i;

	i = 0;
	while (i < baselength)
	{
		if (base[i] == tofind)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	baselength;
	unsigned int	i;
	unsigned int	unb;
	unsigned int	mult;
	int				sign;

	i = 0;
	unb = 0;
	mult = 1;
	if (ft_checkbase(base, &baselength) == 0)
		return (0);
	str = ft_prestr(str, &sign);
	while (ft_find_inbase(str[i++], base, baselength) >= 0)
	while (--i > 0)
	{
		unb = unb + ft_find_inbase(str[i], base, baselength) * mult;
		mult *= baselength;
	}
	return (sign * unb);
}


#include <stdio.h>
int	main(void)
{
	char 	str[] = "  \t++--12131415..";
	char	base[] = "0123456789";

	printf("%s\n%d\n", str, ft_atoi_base(str, base));
}
