/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:32:41 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/14 14:29:50 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The atoi function converts the initial part of string to a signed integer, 
	which is returned as a value of type int.
*/

#include <stddef.h>

static char	*ft_prestr(char *str, char *sign)
{
	size_t	i;

	*sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (&str[i]);
}

int	ft_atoi(const char *string)
{
	char			sign;
	char			*str;
	int				i;
	size_t			unb;
	size_t			mult10;

	str = (char*) string;
	i = 0;
	unb = 0;
	mult10 = 1;
	str = ft_prestr(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (i > 0)
	{
		i--;
		unb = unb + (str[i] - '0') * mult10;
		mult10 *= 10;
	}
	return (sign * unb);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "\n	+--+-2147483648.test";

	printf("%s\n%d\n", str, ft_atoi(str));
}
*/