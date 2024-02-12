/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:43:16 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:11:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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