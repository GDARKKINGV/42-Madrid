/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:20:09 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:03:19 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_bzero( void *str, size_t len)
{
	ft_memset(str, 0, len);
}

/*int main (void)
{
	char str[] = "Hola";
	ft_bzero(str, 3);
	printf("%s\n", str);
	return (0);
}*/