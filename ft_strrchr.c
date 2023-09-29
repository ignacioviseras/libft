/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:15:44 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/29 19:37:27 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
/*
La funcionalidad descrita en esta página de referencia está alineada con la norma ISO C.
Cualquier conflicto entre los requisitos descrito aquí y el estándar ISO C no es intencional.
Este el volumen de POSIX.1‐2017 difiere del estándar ISO C.
La función strrchr() localizará la última aparición de c (convertido a char) en la cadena a la que apunta s.
El carácter NUL de terminación se considera parte de la cadena.
*/
char    *ft_strrchr(const char *s, int c)
{
    size_t  index;

    index = ft_strlen(s);
    if (s[index] == '\0')
    {
        return (NULL);
    }
    while (index > 0 || s[index] != '\0')
    {
        if (s[index] == c)
        {
            return ((char *)s);
        }
        index--;
    }
    return (NULL);
}
int main(void)
{
    printf("%s\n", ft_strrchr("teste", 'e'));
    printf("%s\n", strrchr("teste", 'e'));
    printf("%s\n", "--------------------------");
    printf("%s\n", ft_strrchr("teste", '\0'));
    printf("%s\n", strrchr("teste", '\0'));
    printf("%s\n", "--------------------------");
    printf("%s\n", ft_strrchr("xteste", 'x'));
    printf("%s\n", strrchr("xteste", 'x'));
    printf("%s\n", "--------------------------");
    printf("%s\n", ft_strrchr("teste", 'x'));
    printf("%s\n", strrchr("teste", 'x'));
    printf("%s\n", "--------------------------");
    printf("%s\n", ft_strrchr("teste", 1024 + 'e'));
    printf("%s\n", strrchr("teste", 1024 + 'e'));
    printf("%s\n", "--------------------------");
    printf("%s\n", ft_strrchr("teste", 1024));
    printf("%s\n", strrchr("teste", 1024));
    printf("%s\n", "--------------------------");
    printf("%s\n", ft_strrchr("pepe y cparlos", 'c'));
    printf("%s\n", strrchr("pepe y cparlos", 'c'));
}

/*
char *ft_strrchr(const char *s)
{
    size_t index;

    index = 0;
    while (s[index] != '\0')
    {
        index++;
    }
}
*/