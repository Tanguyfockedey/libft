/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:33:22 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/20 17:25:29 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the string s into a newly allocated string. The string 
	is allocated using malloc. If malloc cannot allocate space for the new 
	string, strdup returns a null pointer. Otherwise it returns a pointer to 
	the new string.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	dest = malloc((length + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < length)
	{
		dest[i] = s[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "This is a string";
	char *str2;

	str2 = ft_strdup(str);
	printf("%s\n%s\n", str, str2);
	//printf("%s\n", ft_strdup(""));
	//printf("%s\n", ft_strdup("this is\0 a test"));
	free(str2);
}
*/