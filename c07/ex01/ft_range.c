/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:28:35 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/31 02:28:38 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*numbers;
	int	i;

	i = -1;
	if (min >= max)
		return (0);
	numbers = malloc((max - min) * sizeof(int));
	if (!numbers)
		return (0);
	while (++i < max - min)
		numbers[i] = min + i;
	numbers[i] = '\0';
	return (numbers);
}
/*
int main() {
	int min = 5;
	int max = 15;

	int *result = ft_range(min, max);

	for (int i = 0; result[i] != '\0'; i++) {
		printf(" %d", result[i]);
	}
	printf("\n");

	free(result);

	return (0);
}*/