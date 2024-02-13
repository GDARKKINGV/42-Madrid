/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:09:49 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/15 13:15:04 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	*tab0;
	int	*tab2;
	int	i;

	i = 0;
	tab0 = tab;
	while (i < size)
	{
		tab = tab0;
		tab2 = tab + 1;
		while (tab2 != tab0 + size)
		{
			if (*tab > *tab2)
			{
				temp = *tab;
				*tab = *tab2;
				*tab2 = temp;
			}
			tab++;
			tab2 = tab + 1;
		}
		i++;
	}
}
