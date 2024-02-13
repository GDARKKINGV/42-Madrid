/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:44:48 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/24 19:54:49 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*
int main()
{
	char *str = "hello world";
	int number;

	number = ft_strlen(str);
	printf("el string es: %s\n", str);
	printf("la cantidad de caracteres encontrados en el string es: %d", number);
}*/
