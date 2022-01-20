/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:38:52 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/17 15:38:52 by tfockede         ###   ########.fr       */
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
	size_t count;

	count = 0;
	while(*s)
	{
		if(*s++ == c)
			count++;
	}
	return(count + 1);
}

static size_t	ft_substr_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while((s[i] != c) && (s[i] != '\0'))
	{
		i++;
	}
	return(i);
}

static void	*ft_free(char **result, size_t i)
{
	while(i-- > 0)
	{
		free(result[i]);
	}
	free(result);
	return(0);
}

static char	*ft_substr(const char *str, size_t start, size_t len)
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

char	**ft_split(const char *s, char c)
{
	char **result;
	size_t	substr_count;
	size_t	substr_len;
	size_t	i;

	substr_count = ft_substr_count(s, c);
	result = malloc((substr_count + 1) * sizeof(char *));
	if(!result)
		return(0);
	i = 0;
	while(i < substr_count)
	{
		substr_len = ft_substr_len(s, c);
		result[i] = ft_substr(s, 0, substr_len);
		if(!result[i])
			return(ft_free(result, i));
		s = &s[substr_len + 1];
		i++;
	}
	result[substr_count] = NULL;
	return(result);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "/abc/def/ghi/jkl";
	char c = '/';
	char **output;
	int i = 0;

	output = ft_split(str, c);
	while(output[i] != 0)
	{
		printf("%s\n", output[i]);
		free(output[i]);
		i++;
	}
	free(output);
}
*/