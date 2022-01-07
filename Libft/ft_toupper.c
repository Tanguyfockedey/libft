/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:35:36 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/07 18:01:01 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 32);
	return(c);
}

/*
#include <stdio.h>
int	main(void)
{
	int a = 'a';
	int b;

	b = ft_toupper(a);
	printf("%c\n", b);
}
*/