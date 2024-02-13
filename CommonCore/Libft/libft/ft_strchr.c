/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:12:42 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:12:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/* int main (void)
{
	char str[] = "Hola";
	printf("%s\n", ft_strchr(str, 'a'));
	printf("%s\n", ft_strchr(str, 'o'));
	printf("%s\n", ft_strchr(str, 'H'));
	printf("%s\n", ft_strchr(str, 'l'));
	printf("%s\n", ft_strchr(str, 'z'));
	printf("%s\n", ft_strchr(str, '\0'));
	printf("%s\n", ft_strchr(str, 0));
	printf("%s\n", ft_strchr(str, 127));
	printf("%s\n", ft_strchr(str, 128));
	printf("%s\n", ft_strchr(str, -1));
	printf("%s\n", ft_strchr(str, -128));
	printf("%s\n", ft_strchr(str, -129));
	return (0);
} */