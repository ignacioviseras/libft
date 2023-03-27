/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:06:04 by igvisera          #+#    #+#             */
/*   Updated: 2023/03/27 20:48:47 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == '\0' || s[index] == c)
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
*/

/*El	strchr(void) funciones devuelven un puntero al
carácter coincidente o NULL si no se encuentra el carácter.

los el byte nulo final se considera parte de la cadena,
de modo que si c se especifica como '\0', 
estas funciones devuelven un puntero a El terminador. */
char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == '\0' || s[index] == c)
		{
			return ((char *)s);
		}
	}
	return ((char *)s);
}
