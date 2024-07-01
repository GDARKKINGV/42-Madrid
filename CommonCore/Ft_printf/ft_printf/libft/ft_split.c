/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:31:10 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/20 13:31:10 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	nwords;
	int		is_word;

	i = 0;
	nwords = 0;
	is_word = 0;
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			nwords++;
		}
		if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (nwords);
}

static size_t	countchr(char const *s, char c)
{
	size_t		i;
	char const	*str;

	i = 0;
	str = s;
	while (*str)
	{
		if (*str == c)
			return (i);
		i++;
		str++;
	}
	return (i);
}

static void	strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static char	**assingmatriz(char **matriz, size_t nwords, char const *s, char c)
{
	size_t	nchars;
	size_t	i;

	i = 0;
	while (i < nwords)
	{
		nchars = countchr(s, c);
		if (!nchars)
			s++;
		else
		{
			matriz[i] = malloc(sizeof(char) * nchars + 1);
			if (!matriz[i])
			{
				while (i > 0)
					free(matriz[--i]);
				free(matriz);
				return (0);
			}
			strlcpy(matriz[i++], s, nchars);
			s += nchars;
		}
	}
	matriz[i] = NULL;
	return (matriz);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	nwords;

	nwords = countwords(s, c);
	matriz = malloc(sizeof(char *) * (nwords + 1));
	if (!matriz)
		return (0);
	return (assingmatriz(matriz, nwords, s, c));
}

/*
int	main(void)
{
	char	**matriz;
	char	*str;
	int		i;

	i = 0;
	str = "||this|for|me|||||!|";
	matriz = ft_split("          ", ' ');
	while (matriz[i])
	{
		printf("%s\n", matriz[i]);
		i++;
	}
	return (0);
}*/