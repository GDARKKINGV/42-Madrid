/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:08:07 by jugirald          #+#    #+#             */
/*   Updated: 2023/10/22 20:05:34 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
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
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new2);
	ft_lstadd_front(&lst, new3);
	ft_lstadd_front(&lst, new4);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/