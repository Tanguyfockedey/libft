/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:01:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/10 15:01:49 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < '0' || str[j] > '9')
		{
			i = 0;
			return (i);
		}
		j++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "123";
	int	i;

	i = 2;
	i = ft_str_is_numeric(str);
	printf("%d\n", i);
}
*/