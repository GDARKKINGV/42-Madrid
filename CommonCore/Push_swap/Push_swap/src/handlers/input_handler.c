/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:49:01 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/23 19:31:12 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	input_handler(int argc, char **argv)
{
	char	*argerror;
	char	**numlist;
	int		i;

	argerror = "Error\n";
	if (argc < 2)
		return (ft_putstr_fd(argerror, 2), 0);
	else if (argc == 2)
	{
		numlist = ft_split(argv[1], ' ');
		if (!numlist)
			return (ft_putstr_fd(argerror, 2), 0);
	}
	else
	{
	}
}


