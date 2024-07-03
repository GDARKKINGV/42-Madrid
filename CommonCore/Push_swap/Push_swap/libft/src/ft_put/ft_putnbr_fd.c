/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:20:26 by jugirald          #+#    #+#             */
/*   Updated: 2023/10/13 15:49:26 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		len += ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		len += ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
		write(fd, &(char){n + '0'}, 1);
	return (len + 1);
}
/*
int mian()
{
	ft_putnbr_fd(-2147483648, 1);
}
*/