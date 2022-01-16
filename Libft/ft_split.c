/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:24:26 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/14 14:24:26 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns an array of strings obtained by splitting ’s’ using 
	the character ’c’ as a delimiter. 
	The array must be ended by a NULL pointer.
*/

#include <stdlib.h>

static size_t	ft_substr_count(const char *s, char c)
{
	size_t	i;
	size_t	count;
	
	i = 0;
	count = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			count++;
		i++;
	}
	return(count + 1);
}

static char	*ft_allocate_substr(char *s, char c)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	while((s[i] != c) && (s[i] != '\0'))
		i++;
	result = malloc((i + 1) * sizeof(char));
	if(!result)
		return(0);
	j = 0;
	while(j < i)
	{
		result[j] = s[j];
		j++;
	}
	result[j] = '\0';
	return(result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	char	*temp;
	size_t	substr_count;
	size_t	i;

	temp = (char*)s;
	substr_count = ft_substr_count(s, c);
	result = malloc((substr_count + 1) * sizeof(char *));
	if(!result)
		return(0);
	i = 0;
	while(i < substr_count)
	{
		result[i] = ft_allocate_substr(temp, c);
		i++;
	}
	*result[substr_count] = 0;
	return(result);
}


#include <stdio.h>
int	main(void)
{
	char *str = "abc/def/ghi/jkl";
	char c = '/';
	char **output;
	int	i = 0;

	output = ft_split(str, c);
	while(output[i])
	{
		printf("%s\n", output[i]);
		free(output[i]);
		i++;
	}
	free(output[i]);
	free(output);
}