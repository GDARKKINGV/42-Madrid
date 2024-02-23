/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:45:15 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:02:48 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*newnode;

	if (!del || !lst)
		return ;
	newnode = *lst;
	while (*lst)
	{
		newnode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = newnode;
	}
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
	ft_lstclear(&lst, free);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/