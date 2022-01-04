/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:48:18 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/10 13:48:20 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
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
	char	str[] = "Alpha";
	int	i;

	i = 2;
	i = ft_str_is_alpha(str);
	printf("%d\n", i);
}
*/