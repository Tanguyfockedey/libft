/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:55:40 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/10 15:55:44 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < 'a' || str[j] > 'z')
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
	char	str[] = "test";
	int	i;

	i = 2;
	i = ft_str_is_lowercase(str);
	printf("%d\n", i);
}
*/