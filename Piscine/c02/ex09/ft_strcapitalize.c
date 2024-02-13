/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:12:11 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/20 15:46:21 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	char	*str0;
	int		is_first;

	is_first = 1;
	str0 = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (is_first == 1)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 32;
				is_first = 0;
			}
			else if (*str >= '0' && *str <= '9')
				is_first = 0;
		}
		if (!(*str >= 'a' && *str <= 'z')
			&& !(*str >= 'A' && *str <= 'Z') && !(*str >= 48 && *str <= 57))
			is_first = 1;
		str++;
	}
	return (str0);
}
/*int main()
{
	char str[] = "saluT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("nuevo mensaje:%s", str);
	return (0);
}*/
