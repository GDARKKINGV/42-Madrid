/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:04:03 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/24 19:29:27 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_sizeof(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest + ft_sizeof(dest);
	i = ft_sizeof(dest);
	while (*src != '\0' && i < size - 1 && size > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	if (size != 0)
		*ptr = '\0';
	if (size < ft_sizeof(dest))
		return (ft_sizeof(src) + size);
	return (ft_sizeof(dest) + ft_sizeof(src));
}
/*
int main()
{
    char dest[20] = "hola ";
    printf("%u\n", ft_strlcat(dest, "pepe", 2));
    printf("%s\n", dest);
}*/