/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:20:13 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:09:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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