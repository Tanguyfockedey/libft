/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:30:34 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/19 17:30:34 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	//test atoi
	int 	i = 0;
	char	*atoi_str = "	-2147483648.ab4";
	int		atoi_int = -2147483648;
	
	i = ft_atoi(atoi_str);
	if(atoi_int == i)
		printf("atoi		OK\n");
	else
		printf("atoi		NOK\n");

	//test bzero
	char	bzero_str[] = "This is a string to erase\n";

	ft_bzero(bzero_str, 25);
	if(bzero_str[24] == 0 && bzero_str[0] == 0 && bzero_str[25] == '\n')
		printf("bzero		OK\n");
	else
		printf("bzero		NOK\n");

	//test calloc
	char	*calloc;

	calloc = ft_calloc(2, 4);
	if(calloc[7] == 0)
		printf("calloc		OK\n");
	else
		printf("calloc		NOK\n");
	free(calloc);

	//test isalnum
	if(ft_isalnum('a') && ft_isalnum('0') && !ft_isalnum('!'))
		printf("isalnum		OK\n");
	else
		printf("isalnum		NOK\n");

	//test isalpha
	if(ft_isalpha('a') && !ft_isalpha('0'))
		printf("isalpha		OK\n");
	else
		printf("isalpha		NOK\n");

	//test isascii
	if(ft_isascii(0) && ft_isascii(127) && !ft_isascii(128))
		printf("isascii		OK\n");
	else
		printf("isascii		NOK\n");
	
	//test isdigit
	if(ft_isdigit('0') && ft_isdigit('9') && !ft_isdigit(0))
		printf("isdigit		OK\n");
	else
		printf("isdigit		NOK\n");
	
	//test isprint
	if(ft_isprint(' ') && ft_isprint('~') && !ft_isprint(0) && !ft_isprint(128))
		printf("isprint		OK\n");
	else
		printf("isprint		NOK\n");

	//test itoa
	char	*itoa_str;
	
	i = -2147483648;
	itoa_str = ft_itoa(i);
	if(itoa_str[10] == '8' && itoa_str[0] == '-')
		printf("itoa		OK\n");
	else
		printf("itoa		NOK\n");
	free(itoa_str);

	//test memchr
	char	*memchr = "Stringr";

	if(ft_memchr(memchr, 'r', 7) == &memchr[2])
		printf("memchr		OK\n");
	else
		printf("memchr		NOK\n");

	//test memcmp
	char	*memcmp1 = "test1";
	char	*memcmp2 = "test2";
	if(!ft_memcmp(memcmp1,memcmp2,4) && (ft_memcmp(memcmp1,memcmp2,5) < 0))
		printf("memcmp		OK\n");
	else
		printf("memcmp		NOK\n");
	
	//test memcpy
}