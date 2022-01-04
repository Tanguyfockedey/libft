/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:29:02 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/12 11:29:04 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	equals;

	equals = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		equals = s1[i] - s2[i];
		if (equals != 0)
			return (equals);
		i++;
	}
	equals = s1[i] - s2[i];
	return (equals);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "This is a test string1";
	char	str2[] = "This is a test string2";

	printf("%d\n", ft_strcmp(str1, str2));
}
*/