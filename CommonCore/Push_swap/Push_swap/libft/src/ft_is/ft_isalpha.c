/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:17:34 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:02:28 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/* int main (void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('\n'));
	printf("%d\n", ft_isalpha('\0'));
	printf("%d\n", ft_isalpha(0));
	printf("%d\n", ft_isalpha(127));
	printf("%d\n", ft_isalpha(128));
	printf("%d\n", ft_isalpha(-1));
	printf("%d\n", ft_isalpha(-128));
	printf("%d\n", ft_isalpha(-129));
	return (0);
} */