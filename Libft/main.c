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
#include <stdlib.h> //contains malloc and size_t
//#include <stddef.h> //contains malloc



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

//test strchr
	char	str[] = "This is the string to search";
	int	to_find = 'g';
	char	*result;

	result = ft_strchr(str, to_find);
	printf("Strchr\n%s\n%d\n%s\n", str, to_find, result);

//test strrchr
	result = ft_strrchr(str, to_find);
	printf("Strtchr\nTo search: %s\nTo find: %d\nResult: %s\n", str, to_find, result);

//test strjoin
	char	*strjoin1 = "a1 ";
	char	*strjoin2 = "b2"; 
	char	*outputjoin;

	outputjoin = ft_strjoin(strjoin1, strjoin2);
	if((outputjoin[4] == '2') && !outputjoin[5])
		printf("strjoin		OK\n");
	else
		printf("strjoin		NOK\n");
	free(outputjoin);

//test lstnew
	t_list *str_list;

	i = 123;
	str_list = ft_lstnew(&i);
	printf("\nList tests:\n\n%d\n%p\n", *(int*)str_list->content, str_list->next);
	free(str_list);

//test lstadd_front + lstsize
	t_list *n1 = ft_lstnew("1");
	t_list *n2 = ft_lstnew("2");
	t_list *n3 = ft_lstnew("3");
	t_list	*l;

	ft_lstadd_front(&n1, n2);
	ft_lstadd_front(&n1, n3);
	l = n1;
	printf("list length: %d\n", ft_lstsize(l));
	while(l)
		{
			printf("%s --> ", (char*)l->content);
			l = l->next;
		}
	printf("%p\n", l);

//lstlast
	l = n1;
	printf("last element: %s\n", (char*)ft_lstlast(l)->content);

//lstadd_back
	t_list *n4 = ft_lstnew("4");

	ft_lstadd_back(&n1, n4);
	while(l)
		{
			printf("%s --> ", (char*)l->content);
			l = l->next;
		}
	printf("%p\n\n", l);
/*
//lstclear
	ft_lstclear(&n1, free);
*/	
}
