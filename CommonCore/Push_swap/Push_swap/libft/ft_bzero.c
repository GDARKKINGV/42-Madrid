/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:20:09 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:06:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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