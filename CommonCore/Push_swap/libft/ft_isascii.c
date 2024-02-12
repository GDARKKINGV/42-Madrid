/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:31:13 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:10:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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