#include "libft.h"

static void	ft_the_free(void *content)
{
	free(content);
}

static void	ft_putstr2(void *content)
{
	char	*str;

	str = (char *)content;
	ft_putstr_fd(str, 1);
	ft_putstr_fd(" ", 1);	
}

static void	*ft_minus(void *content)
{
	char	*str;

	str = ft_calloc(sizeof(char), ft_strlen((char *)content) + 2);
	str[0] = '-';
	str[1] = *(char *)content;
	return ((void *)str);
}

int		test_chain_lst(void)
{
	t_list	*lst;
	t_list	*tmp;
	t_list	*tmp2;

	printf("lstnew :\n");
	lst = ft_lstnew(ft_strdup("4"));
	test_putlst(lst);

	printf("\nlstadd_front :\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3")));
	test_putlst(lst);

	// void ft_lstadd_back(t_list **alst, t_list *new)
	printf("\nlstadd_back :\n");
	tmp = lst;
	ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("5")));
	test_putlst(tmp);

	// t_list	*ft_lstlast(t_list *lst)
	tmp = ft_lstlast(lst);
	printf("\nlstlast : \nlast element : |%s|\n",
			(char *)tmp->content);

	printf("\nlstsize : %i\n", ft_lstsize(lst));

	// void ft_lstdelone(t_list *lst, void (*del)(void*))
	printf("\non remplit la liste :\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("0")));
	test_putlst(lst);

	printf("	lstdelone :\n");
	tmp = lst->next->next;
	tmp2 = tmp->next;
	ft_lstdelone(tmp, &ft_the_free);
	lst->next->next = tmp2;
	test_putlst(lst);

	printf("\n	lstclear :\n");
	tmp = lst->next->next;
	ft_lstclear(&tmp, &ft_the_free);
	lst->next->next = tmp;
	test_putlst(lst);

	printf("\non re remplit la liste :\n");
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("3")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("4")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("5")));
	test_putlst(lst);

	printf("\nlstiter : on affiche avec ft_putstr2\n");
	ft_lstiter(lst, &ft_putstr2);

	// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
	printf("\n\nlstmap :\n");
	tmp = ft_lstmap(lst, &ft_minus, &ft_the_free);
	printf("la liste original lst :\n");
	test_putlst(lst);
	printf("\nla liste modifiÃ©e tmp :\n");
	test_putlst(tmp);

	return (1);
}
