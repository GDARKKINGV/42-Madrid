/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:47:20 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/13 18:30:16 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_while(char a, char b, char c, char d)
{
	while (d++ < '9')
	{
		if ((a < c) || ((b < d) && (a == c)))
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a != '9' || b != '8' || c != '9' || d != '9')
				write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '/';
	while (a++ < '9')
	{
		b = '/';
		while (b++ < '9')
		{
			c = '/';
			while (c++ < '9')
			{
				d = '/';
				print_while(a, b, c, d);
			}
		}
	}
}