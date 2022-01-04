/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:27:45 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/12 12:27:47 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				equals;

	equals = 0;
	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] != '\0' && i < n - 1)
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
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[] = "This is a test";
	char	str2[] = "This is a test";

	printf("%d\n", ft_strncmp(str1, str2, 3));
	printf("%d\n", strncmp(str1, str2, 3));
}
*/