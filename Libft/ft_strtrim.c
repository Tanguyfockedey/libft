/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:48:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/20 17:46:07 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a copy of ’s1’ with the characters specified in ’set’
	removed from the beginning and the end of the string.
*/

#include "libft.h"
#include <stdlib.h>

static size_t	ft_pretrim(const char *str, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(set[i])
	{
		if(set[i] == str[j])
		{
			j++;
			i = 0;
			continue;
		}
		i++;
	}
	return(j);
}

static size_t	ft_endtrim(const char*str, const char *set, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = len;
	while(set[i])
	{
		if(set[i] == str[j - 1])
		{
			j--;
			i = 0;
			continue;
		}
		i++;
	}
	return(len - j);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*string;
	size_t	pretrim;
	size_t	endtrim;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	pretrim = ft_pretrim(s1, set);
	endtrim = ft_endtrim(s1, set, len);
	string = malloc((len - pretrim - endtrim + 1) * sizeof(char));
	if(!string)
		return(0);
	i = 0;
	while (i < (len - pretrim - endtrim))
	{
		string[i] = s1[pretrim + i];
		i++;
	}
	string[i] = '\0';
	return(string);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "abc testTest  cba";
	char	*set = " a b c ";
	char	*result;

	result = ft_strtrim(str, set);
	printf("%s\n", result);
	free(result);
}
*/