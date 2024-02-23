/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:53:16 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:04:55 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = 0;
	if (dstsize > 0)
	{
		while (len_dst < dstsize && dst[len_dst])
			len_dst++;
		while (len_dst + i < (dstsize - 1) && src[i])
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		if (len_dst + i < dstsize)
			dst[len_dst + i] = '\0';
	}
	while (src[i])
		i++;
	return (len_dst + i);
}

/*
int main (void)
{
	char str[] = "Hola";
	char str2[] = "Adios";
	printf("%zu\n", ft_strlcat(str, str2, 3));
	return (0);
}
*/