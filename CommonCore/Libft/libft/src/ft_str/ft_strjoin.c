/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:35:40 by jugirald          #+#    #+#             */
/*   Updated: 2024/02/22 22:04:51 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s1size;
	size_t	s2size;

	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (s1size + s2size + 1));
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, s1size + 1);
	s3 += s1size;
	ft_strlcpy(s3, s2, s2size + 1);
	s3 -= s1size;
	return (s3);
}
/*
int main()
{
	char s1[] = "Hola";
	char s2[] = "Mundo";
	printf("%s\n", ft_strjoin(s1, s2));
}
*/