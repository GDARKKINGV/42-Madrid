/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:04:30 by jugirald          #+#    #+#             */
/*   Updated: 2024/07/03 19:57:57 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void print_stack(t_stack_node *stack)
{
	t_stack_node *tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d\n", tmp->nbr);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack_node *stack_a;

	stack_a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	init_handler(&stack_a, argv);
	print_stack(stack_a);
	free_stack(&stack_a);
	return (1);
}

/*
Parametros a gestionar

el stack nunca puede tener numeros repetidos

solo se pueden pasar los argumentos en un formato. string o numero a numero:

los argumentos deben ser numeros enteros

el primer argumento debe ser el que este encima del stackar

arg1

arg2

...

el orden de los numeros debe ser acendente

1

2

3

...

las instrucciones deben separarce utilizando "\n"

en caso de error se debe mostrar Error seguido de "\n"
 
*/

/*
operaciones disponiblesmi

sa swap a: Intercambia los dos primeros elementos del stack a. No hace nada si
hay uno o menos elementos.

sb swap b: Intercambia los dos primeros elementos del stack b. No hace nada si
hay uno o menos elementos.

ss swap a y swap b a la vez.

pa push a: Toma el primer elemento del stack b y lo pone el primero en el stack
a. No hace nada si b está vacío.

pb push b: Toma el primer elemento del stack a y lo pone el primero en el stack
b. No hace nada si a está vacío.

ra rotate a: Desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.

rb rotate b: Desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.

rr ra y rb al mismo tiempo.

rra reverse rotate a: Desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.

rrb reverse rotate b: Desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.

rrr rra y rrb al mismo tiempo.
*/