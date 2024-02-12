/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:34:48 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 16:14:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/* int main (void)
{
	char str[] = "Hola";
	printf("%s\n", ft_strrchr(str, 'a'));
	printf("%s\n", ft_strrchr(str, 'o'));
	printf("%s\n", ft_strrchr(str, 'H'));
	printf("%s\n", ft_strrchr(str, 'l'));
	printf("%s\n", ft_strrchr(str, 'z'));
	printf("%s\n", ft_strrchr(str, '\0'));
	printf("%s\n", ft_strrchr(str, 0));
	printf("%s\n", ft_strrchr(str, 127));
	printf("%s\n", ft_strrchr(str, 128));
	printf("%s\n", ft_strrchr(str, -1));
	printf("%s\n", ft_strrchr(str, -128));
	printf("%s\n", ft_strrchr(str, -129));
	return (0);
} */