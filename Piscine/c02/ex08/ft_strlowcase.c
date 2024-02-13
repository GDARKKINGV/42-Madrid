/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:04:10 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/17 19:10:08 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		i++;
		str++;
	}
	str -= i;
	return (str);
}
/*
int main()
{
    char str[] = "HELLO WORLD";

    ft_strlowcase(str);
    printf("el resultado es:%s", str );
    return(0);
}*/
