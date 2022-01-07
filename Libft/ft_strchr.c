/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:22:33 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/07 19:08:51 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	size_t i;

	i = 0;
	while(str[i])
	{
		if(c == str[i])
			return((char *)&str[i]);
		i++;
	}
	if(c == 0)
		return((char*)&str[i]);
	return(0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the string to search";
	int	to_find = '\0';
	char	*result;

	result = ft_strchr(str, to_find);
	printf("%s\n%d\n%s\n", str, to_find, result);
}
*/