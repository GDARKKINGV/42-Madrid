/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_find_next_prime.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:56:45 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/30 23:27:12 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
			nb++;
	return (nb);
}
/*
int main()
{
    printf("numero a revisar: %d\nresultado: %d", 9, ft_find_next_prime(9));
}*/
