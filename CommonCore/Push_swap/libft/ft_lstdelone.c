/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:04:32 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/24 20:55:18 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
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
	ft_lstdelone(lst, free);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/