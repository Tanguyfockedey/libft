/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:32:29 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/11 15:58:08 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strnstr() function locates the first occurrence of the null-terminated 
	string little in the string big, where not more than len characters are 
	searched. Characters that appear after a '\0' character are not searched.
*/

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char*)big);
	i = 0;
	while (big[i] && len > 0)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char*)&big[i]);
			j++;
		}	
		i++;
		len--;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the string to search";
	char	to_find[] = "string";
	char	*result;

	result = ft_strnstr(str, to_find, 20);
	printf("%s\n%s\n%s\n", str, to_find, result);
}
*/