/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:14:10 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/23 04:14:16 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		i++;
		str++;
	}
	str -= i;
	return (str);
}
/*
int main()
{
    char str[] = "hello world";

    ft_strupcase(str);
    printf("el resultado es:%s", str );
    return(0);
}*/
