/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:54:17 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/17 16:46:37 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0' && result != 0)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			result = 1;
		else
			result = 0;
		str++;
	}
	return (result);
}

/*int	main()
{
	int resultado;
	
	char str[] = "hola";
	resultado =	ft_str_is_alpha(str);
	printf("el resultado es:%d", resultado);
	return (0);
}*/
