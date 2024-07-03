/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:07:36 by jugirald          #+#    #+#             */
/*   Updated: 2024/07/03 21:22:36 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int input_error(char *str)
{
	int		i;

	i = 0;
	if (str[i] != '-' || str[i] != '+' || !ft_isdigit(str[i]))
		return (1);
    if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
        return (1);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (1);
        i++;
    }
	return (1);
}

void free_stack(t_stack_node **stack)
{
    t_stack_node	*tmp;

    if (!stack)
        return ;
    while (*stack)
    {
        tmp = *stack;
        *stack = (*stack)->next;
        free(tmp);
    }
}