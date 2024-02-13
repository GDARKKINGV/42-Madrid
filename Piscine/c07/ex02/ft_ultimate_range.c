/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:29:32 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/31 02:29:36 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = -1;
	if (min >= max)
		return (0);
	tab = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	while (++i < max - min)
		tab[i] = min + i;
	tab[i] = '\0';
	*range = tab;
	return (max - min);
}
/*
int main() {
	int min = 5;
	int max = 15;
	int *range;

	int result = ft_ultimate_range(&range, min, max);

	printf("%d", result);

	free(range);

	return (0);
}*/