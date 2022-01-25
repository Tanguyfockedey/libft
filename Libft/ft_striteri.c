/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:38:14 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/18 16:38:14 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Applies the function f to each character of the string passed as argument, 
	and passing its index as first argument. Each character is passed by 
	address to f to be modified if necessary.
*/

#include "libft.h"
#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}

/*
#include <stdio.h>
void f(unsigned int i, char *str)
{
	(void)i;
	*str = *str + 1;
}

int main(void)
{
	char	str1[] = "abc";

	printf("%s\n", str1);
	ft_striteri(str1, *f);
	printf("%s\n", str1);
}
*/