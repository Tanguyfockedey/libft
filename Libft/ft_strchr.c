/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:22:33 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/07 18:47:12 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	size_t i;
	char	*tmp;

	tmp = str;
	i = 0;
	while(str[i])
	{
		if(c == str[i])
			return(&str[i]);
		i++;
	}
	return(0);
}


#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the string to search";
	int	to_find = 'r';
	char	*result;

	result = ft_strchr(str, to_find);
	printf("%s\n%d\n%s\n", str, to_find, result);
}
