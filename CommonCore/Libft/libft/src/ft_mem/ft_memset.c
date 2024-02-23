/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:09:27 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:03:49 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*aux;
	size_t			i;

	aux = str;
	i = 0;
	while (i < len)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/* int main (void)
{
	char str[] = "Hola";
	printf("%s\n", ft_memset(str, 'a', 3));
	return (0);
} */