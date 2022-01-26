/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:38:26 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/25 17:38:26 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Iterates the list ’lst’ and applies the function ’f’ to the content of 
	each element. Creates a new list resulting of the successive applications 
	of the function ’f’. The ’del’ function is used to delete the content of 
	an element if needed.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cell;
	t_list	*list;
	void	*data;

	if (lst->next)
		list = ft_lstmap(lst->next, f, del);
	data = malloc(sizeof((lst->content)));
	if (!data)
	{
		ft_lstclear(&list->next, del);
		return (0);
	}
	cell = ft_lstnew(data);
	cell->content = (*f)(lst->content);
	ft_lstadd_back(&list, cell);
	return (list);
}
