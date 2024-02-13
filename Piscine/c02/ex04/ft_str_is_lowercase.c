/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:47:36 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/21 18:46:43 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0' && result != 0)
	{
		if (*str >= 'a' && *str <= 'z')
			result = 1;
		else
			result = 0;
		str++;
	}
	return (result);
}

/*int main()
{
	char str[] = "";
	int resultado;

	resultado = ft_str_is_lowercase(str);
	printf("el resultado es:%d", resultado);
	return(0);
}*/
