/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:04:06 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/24 22:35:00 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base [i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	nbchar;
	int		longbase;

	longbase = checkbase(base);
	if (longbase > 1)
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_putnbr_base(-1 * (nbr / longbase), base);
			ft_putnbr_base(-1 * (nbr % longbase), base);
			return ;
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * (-1);
		}
		if (nbr / longbase != 0)
			ft_putnbr_base((nbr / longbase), base);
		nbchar = base[nbr % longbase];
		write (1, &nbchar, 1);
	}
}
/*
int main()
{
	ft_putnbr_base(26, "F");
	return (0);
}
*/