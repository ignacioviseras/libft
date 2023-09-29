/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:06:04 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/29 21:13:26 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	if (c == '\0')
		return (s[index]);
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char *)s + index);
		index++;
	}
	return (NULL);
}
int	main(void)
{
	char s[] = "tripouille";

	printf("%s\n", ft_strchr(s, 't'));
	printf("%s\n", strchr(s, 't'));
	printf("%s\n", "--------------------------");
	printf("%s\n", ft_strchr(s, 'l'));
	printf("%s\n", strchr(s, 'l'));
	printf("%s\n", "--------------------------");
	printf("%s\n", ft_strchr(s, 'z'));
	printf("%s\n", strchr(s, 'z'));
	printf("%s\n", "--------------------------");
	printf("%s\n", ft_strchr(s, 0));
	printf("%s\n", strchr(s, 0));
	printf("%s\n", "--------------------------");
	printf("%s\n", ft_strchr(s, 't' + 256));
	printf("%s\n", strchr(s, 't' + 256));
	printf("%s\n", "--------------------------");

}