/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:42:04 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/20 13:42:04 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	countnsize(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*isnegative(int n)
{
	char	*str;
	int		nsize;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n = -n;
	nsize = countnsize(n) + 1;
	str = malloc(sizeof(char) * nsize + 1);
	if (!str)
		return (0);
	str[0] = '-';
	i = nsize - 1;
	while (i > 0)
	{
		str[i] = (char)(n % 10) + '0';
		n /= 10;
		i--;
	}
	str[nsize] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nsize;
	int		i;

	if (n < 0)
		return (isnegative(n));
	nsize = countnsize(n);
	str = malloc(sizeof(char) * nsize + 1);
	if (!str)
		return (0);
	i = nsize - 1;
	while (i >= 0)
	{
		str[i] = (char)(n % 10) + '0';
		n /= 10;
		i--;
	}
	str[nsize] = '\0';
	return (str);
}
/*
int main(void)
{
	int n = 1234567890;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
