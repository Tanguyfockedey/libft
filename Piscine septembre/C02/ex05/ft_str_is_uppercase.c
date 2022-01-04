/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:06:00 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/10 16:06:02 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < 'A' || str[j] > 'Z')
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
	i = ft_str_is_uppercase(str);
	printf("%d\n", i);
}
*/