/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:21:38 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/18 14:21:39 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min < max)
	{
		i = 0;
		range[0] = malloc((max - min) * sizeof(int));
		if (!range[0])
			return (-1);
		while (i < max - min)
		{
			range[0][i] = i + min;
			i++;
		}
		return (max - min);
	}
	else
	{
		range[0] = NULL;
		return (0);
	}
}


#include <stdio.h>
int main(void)
{
	int	*tab1[1];
	int *tab2[1];
	int *tab3[1];

	int i = 0;
	int a = 5;
	int b = 11;
	int c, c2, c3;

	c = ft_ultimate_range(tab1, a, b);
	c2 = ft_ultimate_range(tab2, 0, 0);
	c3 = ft_ultimate_range(tab3, -2147483648, 2147483647);
	while (i < b - a)
	{
		printf("%d ", tab1[0][i]);
		i++;
	}
	printf("\nReturn is : %d", c);
	printf("\n%p\nReturn is : %d\n", tab2[0], c2);
	printf("\n%p\nReturn is : %d\n", tab3[0], c3);
}
