/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:31:13 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:02:32 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int main (void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii('\0'));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii(-128));
	printf("%d\n", ft_isascii(-129));
	return (0);
} */