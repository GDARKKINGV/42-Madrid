/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:14:37 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:03:02 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*content;
	t_list	*firstlst;

	if (!f || !del)
		return (0);
	firstlst = 0;
	while (lst)
	{
		content = (*f)(lst->content);
		newlst = ft_lstnew(content);
		if (!newlst)
		{
			(*del)(content);
			ft_lstclear(&firstlst, del);
			return (0);
		}
		ft_lstadd_back(&firstlst, newlst);
		lst = lst->next;
	}
	return (firstlst);
}
/*
int main()
{
	t_list *lst;
	t_list *new;
	t_list *new2;
	t_list *new3;
	t_list *new4;

	lst = ft_lstnew("Hola");
	new = ft_lstnew("Que");
	new2 = ft_lstnew("Tal");
	new3 = ft_lstnew("Estas");
	new4 = ft_lstnew("?");
	ft_lstadd_back(&lst, new);
	ft_lstadd_back(&lst, new2);
	ft_lstadd_back(&lst, new3);
	ft_lstadd_back(&lst, new4);
	ft_lstmap(lst, ft_print, free);
}
*/