/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:14:52 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/14 23:30:45 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	*tab2;
	int	i;

	i = 0;
	tab2 = (tab + size -1);
	while (i < size / 2)
	{
		temp = *tab;
		*tab = *tab2;
		*tab2 = temp;
		tab++;
		tab2--;
		i++;
	}
}
