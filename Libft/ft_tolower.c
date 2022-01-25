/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:30:38 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/25 14:33:36 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	If c is an upper-case letter, tolower returns the corresponding lower-case 
	letter. If c is not an upper-case letter, c is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
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