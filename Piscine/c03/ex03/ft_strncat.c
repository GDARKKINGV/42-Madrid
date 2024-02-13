/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:42:41 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/24 15:31:41 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*c;
	unsigned int	i;

	i = 0;
	c = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (c);
}
/*
int main()
{
    char    src[] = "holaa";
    char    dest[] = "pepe";
	unsigned int	nb = 3;
    ft_strncat(dest, src, nb);
    printf("%s", dest);
    return (0);
}*/
