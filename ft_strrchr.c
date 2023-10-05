/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:15:44 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/01 15:44:55 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;

	index = ft_strlen((char *)s);
	while (index + 1 != 0)
	{
		if (s[index] == (char)c)
			return ((char *)s + index);
		index--;
	}
	if (c == '\0')
		return ((char *)s + index);
	return (NULL);
}
/*
int	main(void)
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
*/