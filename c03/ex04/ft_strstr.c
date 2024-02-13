/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:39:10 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/30 12:42:54 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*aux;
	int		j;

	j = 0;
	if (*to_find == '\0')
		return (str);
	start = to_find;
	while (*str)
	{
		to_find = start;
		j = 0;
		aux = str;
		while (*str == *to_find && *str != '\0')
		{
			j++;
			str++;
			to_find++;
			if (*to_find == '\0')
				return (str - j);
		}
		if (*str != '\0')
			str = aux + 1;
	}
	return (0);
}
/*
int main() {
    char *cadena = "Hola, este es un ejemplo";
    char *subcadena = "un";

    char *resultado = ft_strstr(cadena, subcadena);

	printf("Subcadena encontrada: %s\n", resultado);
    return 0;
}*/
