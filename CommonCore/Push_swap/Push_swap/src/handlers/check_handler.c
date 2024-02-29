/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:49:07 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/28 20:03:59 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_numlist(char **numlist, int initpos)
{
	int	i;
	int	j;

	i = initpos - 1;
	while (numlist[++i])
	{
		j = 0;
		if (numlist[i][j] == '-')
			j++;
		while (numlist[i][j])
		{
			if (numlist[i][j] < '0' || numlist[i][j] > '9')
				return (-1);
			j++;
		}
		if (check_int(numlist[i]))
			return (-1);
	}
	return (0);
}

int	check_int(char *str)
{
	size_t	res;
	int		i;

	res = 0;
	i = -1;
	if (str[i + 1] != '-')
	{
		while (str[++i])
			res = (res * 10) + str[i] - 48;
		if (res > 2147483647)
			return (-1);
	}
	else
	{
		i++;
		while (str[++i])
			res = (res * 10) + str[i] - 48;
		if (res > 2147483648)
			return (-1);
	}
	return (0);
}
