/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:49:01 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/28 18:48:09 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	input_handler(int argc, char **argv)
{
	char	**numlist;

	if (argc == 2)
	{
		numlist = ft_split(argv[1], ' ');
		if (!numlist[0])
			return (ft_free_tab(numlist));
		if (check_numlist(numlist, 0))
			return (ft_free_tab(numlist));
	}
	else
	{
		if (check_numlist(argv, 1))
			return (-1);
	}
	return (0);
}
