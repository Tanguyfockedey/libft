/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:57:05 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/20 17:27:08 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a new string, which is the result of the 
	concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*string;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = malloc(len * sizeof(char));
	if(!string)
		return(0);
	i = 0;
	while(s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j] != '\0')
	{
		string[i + j] = s2[j];
		j++;
	}
	string[i + j] = '\0';
	return(string);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str1 = "This is the beginning ";
	char	*str2 = "and this is the end !"; 
	char	*output;


	printf("\"%s\" + \"%s\"\n", str1, str2);
	output = ft_strjoin(str1, str2);
	printf("%s\n", output);
	free(output);
}
*/