/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:26:07 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:03:36 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst1;
	const char	*src1;

	dst1 = dst;
	src1 = src;
	if (dst == '\0' && src == '\0')
		return (0);
	while (n-- > 0)
		*dst1++ = *src1++;
	return (dst);
}

/* int main (void)
{
	char str[] = "Hola";
	char str2[] = "Adios";
	printf("%s\n", ft_memcpy(str, str2, 3));
	return (0);
} */