/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:11:48 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/23 04:11:54 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0' && result != 0)
	{
		if (*str >= '0' && *str <= '9')
			result = 1;
		else
			result = 0;
		str++;
	}
	return (result);
}
/*int   main()
{
    int resultado;

    char str[6] = "01234";

    resultado = ft_str_is_numeric(str);
    printf("el resultado es:%d", resultado);
    return (0);
}*/
