/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:56:31 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/24 20:52:08 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		str[i] = (*f)(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *s = "hello";
	char (*f)(unsigned int, char) = &ft_toupper;
	printf("%s", ft_strmapi(s, f));
	return (0);
}
*/