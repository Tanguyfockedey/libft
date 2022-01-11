/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:31:20 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/11 16:34:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function strrchr is like strchr, except that it searches backwards from
	the end of the string string (instead of forwards from the front).
*/

#include <stddef.h>

char	*ft_strrchr(const char *string, int c)
{
	char	*str;
	size_t	i;

	str = (char*)string;
	i = 0;
	while(str[i])
		i++;
	while(i > 0)
	{
		if(c == str[i])
			return(&str[i]);
		i--;
	}
	if(c == str[0])
		return(&str[0]);
	return(0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the string to search";
	int	to_find = 'T';
	char	*result;

	result = ft_strrchr(str, to_find);
	printf("To search: %s\nTo find: %d\nResult: %s\n", str, to_find, result);
}
*/