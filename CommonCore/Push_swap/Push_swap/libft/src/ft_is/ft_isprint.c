/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:43:16 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:02:38 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* int main (void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint(0));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(-1));
	printf("%d\n", ft_isprint(-128));
	printf("%d\n", ft_isprint(-129));
	return (0);
} */