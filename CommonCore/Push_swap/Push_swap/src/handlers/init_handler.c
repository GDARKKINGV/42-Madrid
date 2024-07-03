/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:49:01 by jugirald          #+#    #+#             */
/*   Updated: 2024/07/03 19:50:30 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

long ft_atol(const char *str)
{
	int i;
	int sign;
	long res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

static void	append_node(t_stack_node **stack, int nbr)
{
	t_stack_node	*new_node;

	if(!stack)
		return ;
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return ;
	new_node->nbr = nbr;
	new_node->next = NULL;
	if (!*stack)
	{
		*stack = new_node;
	}
	else
	{
		new_node->next = *stack;
		*stack = new_node;
	}
	
}


int	init_handler(t_stack_node *stack_a, char **argv)
{
	int 	j;
	int		i;
	char	**aux;
	
	i = 1;
	while (argv[i])
	{
		aux = ft_split(argv[i], ' ');
		if (!aux)
			return (ft_free_tab(aux));
		j = 0;
		while (aux[j])
		{
			if (input_error(aux[j]))
				return (ft_free_tab(aux));
	
			append_node(&stack_a, ft_atol(aux[j]));
			j++;
		}
		ft_free_tab(aux);
		i++;
	}
	return (1);
}
