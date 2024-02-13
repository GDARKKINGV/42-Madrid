/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:28:12 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/22 19:08:23 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static const char	g_hexadecimal[] = "0123456789abcdef";

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			write(1, "\\", 1);
			write(1, &g_hexadecimal[(unsigned char)str[i] / 16], 1);
			write(1, &g_hexadecimal[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int	main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}*/
