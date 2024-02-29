/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:17:48 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/28 19:09:33 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int main (void)
{
	printf("%d\n", ft_isdigit(0));
	printf("%d\n", ft_isdigit(127));
	printf("%d\n", ft_isdigit(128));
	printf("%d\n", ft_isdigit(-1));
	printf("%d\n", ft_isdigit(-128));
	printf("%d\n", ft_isdigit(-129));
	return (0);
} 