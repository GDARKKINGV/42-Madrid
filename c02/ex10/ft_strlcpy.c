/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:41:16 by jugirald          #+#    #+#             */
/*   Updated: 2023/08/23 05:13:45 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int ft_sizeof(char *src)
{
    int i;

    i = 0;
    while(*src)
    {
        i++;
        src++;
    }
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    size_src;

    i = 0;
    size_src = ft_sizeof(src);
    while (i < size - 1 && size >= 2)
    {
        if (i <= size_src - 1)
            dest[i] = src[i];
        else
            dest[i] = '\0';
        i++;
    }
    if (size != 0)
        dest[i] = '\0';
    return (size_src);
}
/*
void    print_str(char *str)
{
    while(*str)
    {
        write(1, &*str, 1);
        str++;
    }
}

int main()
{
    char    dest[100];
    char    src[] = "hello world";
    unsigned int    size = 6;
    unsigned int    longval;

    longval = ft_strlcpy(dest, src, size);
    print_str(dest);
    printf("\n%d", longval);
}*/
