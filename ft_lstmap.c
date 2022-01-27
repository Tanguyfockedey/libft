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
	t_list	*newlist;

	if (!lst)
		return (0);
	if (lst->next)
		newlist = ft_lstmap(lst->next, f, del);
	cell = ft_lstnew((*f)(lst->content));
	if (!cell)
	{
		ft_lstclear(&newlist, del);
		return (0);
	}
	ft_lstadd_front(&newlist, cell);
	return (newlist);
}

/*
parcourir chaque cellule jusqu'a la fin
	créer une nouvelle cellule
	créer une nouvelle zone méméoire data (malloc)
	appliquer la fonction sur la nouvelle data
	ajouter la cellule a la nouvelle liste
*/
