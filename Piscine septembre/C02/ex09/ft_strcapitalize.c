/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 14:34:30 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/11 14:34:31 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (i == 0 || str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65)
			|| (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = ".salut, 42MOTS quaranTe-deux|cinquante+et~un";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/