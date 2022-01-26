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

void *ft_void(void *content)
{
	return (content);
}

int	main(void)
{/*
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
*/
//test lstnew
	t_list *n1 = ft_lstnew("a");

	printf("\nNew list:\n%s --> %p\n", (char *)n1->content, n1->next);

//test lstadd_front + lstsize
	t_list	**l;
	t_list	*i_list;

	l = &n1;
	printf("Add front:\n");
	ft_lstadd_front(l, ft_lstnew("b"));
	ft_lstadd_front(l, ft_lstnew("c"));
	i_list = *l;
	while (i_list)
	{
		printf("%s --> ", (char *)i_list->content);
		i_list = i_list->next;
	}
	printf("%p\n", i_list);

//lstadd_back
	printf("Add back:\n");
	ft_lstadd_back(l, ft_lstnew("D"));
	ft_lstadd_back(l, ft_lstnew("E"));

	i_list = *l;
	while(i_list)
	{
		printf("%s --> ", (char *)i_list->content);
		i_list = i_list->next;
	}
	printf("%p\n\n", i_list);

//lstsize
	printf("list length: %d\n", ft_lstsize(*l));

//lstlast
	printf("last element: %s\n\n", (char *)ft_lstlast(*l)->content);

//free
	i_list = *l;
	while(i_list)
	{
		n1 = i_list;
		i_list = i_list->next;
		free(n1);
	}

//lstdelone

	
	char *str_l = malloc(4 * sizeof(char));
	str_l[0] = '1';
	str_l[1] = '2';
	str_l[2] = '3';
	str_l[3] = '\0';

	n1 = ft_lstnew(str_l);
	printf("New list: %s\n", (char *)n1->content);
	ft_lstdelone(n1, free);
	// free(n1);

}
