/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:31:40 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/27 09:31:40 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(size_t nbr, char *base)
{
	char	nbchar;
	int		longbase;
	int		len;

	len = 0;
	longbase = 16;
	if (nbr / longbase != 0)
		len += ft_putnbr_base((nbr / longbase), base);
	nbchar = base[nbr % longbase];
	len += write (1, &nbchar, 1);
	return (len);
}

int	ft_putunsignbr_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n <= 9)
	{
		write(fd, &(char){n + '0'}, 1);
	}
	return (len + 1);
}

int	ft_putaddress(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr_fd("0x0", 1));
	len += ft_putstr_fd("0x", 1);
	len += ft_putnbr_base((size_t)ptr, "0123456789abcdef");
	return (len);
}

int	ft_putconvertion(char c, va_list(args))
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (c == 'p')
		return (ft_putaddress(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_putunsignbr_fd(va_arg(args, unsigned int), 1));
	else if (c == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(char const *s, ...)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	va_list(args);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len += ft_putconvertion(s[i], args);
		}
		else
			len += ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
