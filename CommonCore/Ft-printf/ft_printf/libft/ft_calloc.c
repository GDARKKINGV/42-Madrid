/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:09:45 by jugirald          #+#    #+#             */
/*   Updated: 2023/09/16 18:09:45 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloc;

	if (!nmemb || !size)
		return (malloc(0));
	calloc = malloc(nmemb * size);
	if (!calloc)
		return (0);
	ft_bzero(calloc, nmemb * size);
	return (calloc);
}

/*
int main()
{
	char *str = ft_calloc(5, sizeof(char));
	printf("%s\n", str);
	return (0);
}
*/