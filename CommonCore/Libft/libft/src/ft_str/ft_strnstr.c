/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:51:36 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 17:51:36 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j]
			&& i + j < len && big[i + j] && little[j])
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int main()
{
	char *haystack = "Foo Bar Baz";
	char *needle = "abcd";
	printf("%s\n", ft_strnstr(haystack, needle, 9));
	return (0);
}*/