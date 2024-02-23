/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:28:14 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:03:44 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;

	dst1 = dst;
	src1 = src;
	if (dst1 == src1)
		return (dst);
	if (dst1 < src1)
	{
		while (len-- > 0)
			*dst1++ = *src1++;
	}
	else
	{
		dst1 += len;
		src1 += len;
		while (len-- > 0)
			*--dst1 = *--src1;
	}
	return (dst);
}

/*
int main (void)
{
	char str[] = "Hola";
	char str2[] = "Adios";
	printf("%s\n", ft_memmove(str, str2, 3));
	return (0);
}
*/