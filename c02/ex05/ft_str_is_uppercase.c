/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:03:23 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/17 17:15:11 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0' && result != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			result = 1;
		else
			result = 0;
		str++;
	}
	return (result);
}
/*
int main()
{
    char str[] = "";
    int resultado;

    resultado = ft_str_is_uppercase(str);
    printf("el resultado es:%d", resultado);
    return(0);
}*/
