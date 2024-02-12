/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:17:34 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:09:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
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