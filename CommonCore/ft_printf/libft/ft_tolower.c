/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:12:06 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:15:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* int main (void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('0'));
	printf("%c\n", ft_tolower('9'));
	printf("%c\n", ft_tolower(' '));
	printf("%c\n", ft_tolower('\n'));
	printf("%c\n", ft_tolower('\0'));
	printf("%c\n", ft_tolower(0));
	printf("%c\n", ft_tolower(127));
	printf("%c\n", ft_tolower(128));
	printf("%c\n", ft_tolower(-1));
	printf("%c\n", ft_tolower(-128));
	printf("%c\n", ft_tolower(-129));
	return (0);
} */