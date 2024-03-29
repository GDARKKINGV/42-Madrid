/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:04:30 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/28 19:53:50 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (input_handler(argc, argv))
			return (ft_putstr_fd('Error:', 2), 0);
	}
	return (0);
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
operaciones disponibles

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