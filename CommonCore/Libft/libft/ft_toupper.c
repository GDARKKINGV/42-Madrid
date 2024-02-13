/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:09:02 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:15:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* int main (void)
{
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('0'));
	printf("%c\n", ft_toupper('9'));
	printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('\n'));
	printf("%c\n", ft_toupper('\0'));
	printf("%c\n", ft_toupper(0));
	printf("%c\n", ft_toupper(127));
	printf("%c\n", ft_toupper(128));
	printf("%c\n", ft_toupper(-1));
	printf("%c\n", ft_toupper(-128));
	printf("%c\n", ft_toupper(-129));
	return (0);
} */