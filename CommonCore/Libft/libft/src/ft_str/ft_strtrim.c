/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:44:35 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/19 08:44:35 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s1end;
	size_t	s1start;
	size_t	i;

	s1end = ft_strlen(s1);
	s1start = 0;
	i = 0;
	while (s1start < s1end && is_set(s1[s1start], set))
			s1start++;
	while (s1end > s1start && is_set(s1[s1end - 1], set))
			s1end--;
	str = malloc(sizeof(char) * (s1end - s1start) + 1);
	if (!str)
		return (0);
	while (s1start < s1end)
		str[i++] = s1[s1start++];
	str[i] = '\0';
	return (str);
}
/*
int main (void)
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char set[] = " ";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/