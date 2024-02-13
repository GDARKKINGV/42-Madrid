/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:00:32 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/31 08:00:35 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_len(char **strs, int size, int sep_len)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*str;
	char	*m;

	if (size == 0)
		return (malloc(sizeof(char)));
	full_len = ft_final_len(strs, size, ft_strlen(sep));
	str = malloc((full_len + 1) * sizeof(char));
	m = str;
	if (!m)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(m, strs[i]);
		m += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(m, sep);
			m += ft_strlen(sep);
		}
	}
	*m = '\0';
	return (str);
}
/*
int main(void)
{
	char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
	int size = 6;
	char *sep = "-";
	char *result = ft_strjoin(size, strs, sep);
	printf("Concatenated string: %s\n", result);
	free(result);

	return 0;
}*/