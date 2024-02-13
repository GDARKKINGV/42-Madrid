/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:33:17 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/17 17:37:17 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0' && result != 0)
	{
		if (*str >= 32 && *str <= 126)
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

    resultado = ft_str_is_printable(str);
    printf("el resultado es:%d", resultado);
    return(0);
}*/
