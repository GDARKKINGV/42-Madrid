/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:09:49 by jugirald          #+#    #+#             */
/*   Updated: 2023/10/13 15:49:40 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (!s)
		return (write(fd, "(null)", 6));
	while (*s)
	{
		write(fd, &*s, 1);
		s++;
		len++;
	}
	return (len);
}
/*
int main()
{
	ft_putstr_fd("Hola", 1);
}
*/