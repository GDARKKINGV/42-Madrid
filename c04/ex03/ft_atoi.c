/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:31:47 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/24 22:03:19 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i = i * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		j = (*str - '0') + (j * 10);
		str++;
	}
	return (i * j);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("el numero es: %d", ft_atoi(argv[1]));
	return (0);
}*/
