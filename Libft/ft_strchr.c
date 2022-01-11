/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:22:33 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/11 16:18:37 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
	The strchr function finds the first occurrence of the byte c (converted to 
	a char) in the string beginning at string. The return value is a pointer to 
	the located byte, or a null pointer if no match was found. If c is set to
	'\0' then the end of string is returned.
*/

#include <stddef.h>

char	*ft_strchr(const char *string, int c)
{
	char	*str;
	size_t	i;

	str = (char*)string;
	i = 0;
	while(str[i])
	{
		if(c == str[i])
			return(&str[i]);
		i++;
	}
	if(c == 0)
		return(&str[i]);
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