/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:20:13 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:02:25 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main (void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('\0'));
	printf("%d\n", ft_isalnum(0));
	printf("%d\n", ft_isalnum(127));
	printf("%d\n", ft_isalnum(128));
	printf("%d\n", ft_isalnum(-1));
	printf("%d\n", ft_isalnum(-128));
	printf("%d\n", ft_isalnum(-129));
	return (0);
}*/