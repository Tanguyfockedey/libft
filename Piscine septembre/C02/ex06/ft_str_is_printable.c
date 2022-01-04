/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:44:29 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/10 16:44:32 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < ' ' || str[j] > '~')
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
	i = ft_str_is_printable(str);
	printf("%d\n", i);
}
*/