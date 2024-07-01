/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:35:40 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/24 20:59:02 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3size;

	s3size = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * s3size + 1);
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, s3size + 1);
	s3 += ft_strlen(s1);
	ft_strlcpy(s3, s2, s3size + 1);
	s3 -= ft_strlen(s1);
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