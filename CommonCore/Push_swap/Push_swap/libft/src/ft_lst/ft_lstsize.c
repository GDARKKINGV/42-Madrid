/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:25:19 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:03:13 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	printf("%d\n", ft_lstsize(lst));
}
*/