/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:04:51 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/30 23:18:35 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (1 <= power)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (0);
}
/*
int main()
{
    int nb = 3;
    int power = 0;

    printf("%u", ft_recursive_power(nb, power));
}*/
