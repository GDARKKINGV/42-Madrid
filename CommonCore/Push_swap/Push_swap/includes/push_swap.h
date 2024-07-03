/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:29:42 by jugirald          #+#    #+#             */
/*   Updated: 2024/07/03 19:50:40 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

typedef struct s_stack_node {
    int                 nbr;
    struct s_stack_node *next;
} t_stack_node;

//handlers
int	init_handler(t_stack_node *stack_a, char **argv);
int	input_error(char *str);
void free_stack(t_stack_node *stack);


//moves


#endif