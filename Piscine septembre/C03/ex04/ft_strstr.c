/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:37:45 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/13 09:37:47 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}	
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the string to search";
	char	to_find[] = "is the";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("%s\n%s\n%s\n", str, to_find, result);
}
*/