/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:46:09 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/10 14:21:30 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns true (1) if c is an alphabetic character (a letter).
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int c = 'A';
	int	i;

	i = ft_isalpha(c);
	printf("%d\n", i);
}
*/