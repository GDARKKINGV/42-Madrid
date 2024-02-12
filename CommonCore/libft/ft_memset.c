/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:09:27 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:12:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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