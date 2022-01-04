/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:06:02 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/13 17:06:37 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Test string is 33 characters long";
	int x;

	x = ft_strlen(str);
	printf("Test string is %d characters long\n", x);
}
*/