/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:53:14 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/20 16:30:22 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100];
	char	*src;
	char	*ptr;

	src = "hola";
	ft_strcpy(dest, src);
	while (*src)
	{
		write(1, src, 1);
		src++;
	}
	write(1, "\n", 1);
	ptr = dest;
	while (*ptr)
	{
		write(1, ptr, 1);
		ptr++;
	}
	return (0);
}
*/
