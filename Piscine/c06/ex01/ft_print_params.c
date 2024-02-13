/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:17:50 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/30 11:39:33 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
		}
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
}
