/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:13:17 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/12 14:56:42 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include <stdlib.h>

char	*ft_substr(const char *str, size_t start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if(!substr)
		return(0);
	while(i < len)
	{
		substr[i] = str[start + i];
		if(substr[i] == '\0')
			break;
		i++;
	}
	substr[i] = '\0';
	return(substr);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "This is a sting !";
	char	*substr;

	substr = ft_substr(str, 5, 20);
	printf("%s\n%s\n", str, substr);
	free(substr);
}
*/