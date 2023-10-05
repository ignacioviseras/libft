/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:06:04 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/01 15:43:35 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			return ((char *)s + index);
		index++;
	}
	if (c == '\0')
		return ((char *)s + index);
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "tripouille";

// 	printf("%s\n", ft_strchr(s, 't'));
// 	printf("%s\n", strchr(s, 't'));
// 	printf("%s\n", "--------------------------");
// 	printf("%s\n", ft_strchr(s, 'l'));
// 	printf("%s\n", strchr(s, 'l'));
// 	printf("%s\n", "--------------------------");
// 	printf("%s\n", ft_strchr(s, 'z'));
// 	printf("%s\n", strchr(s, 'z'));
// 	printf("%s\n", "--------------------------");
// 	printf("%s\n", ft_strchr(s, 0));
// 	printf("%s\n", strchr(s, 0));
// 	printf("%s\n", "--------------------------");
// 	printf("%s\n", ft_strchr(s, 't' + 256));
// 	printf("%s\n", strchr(s, 't' + 256));
// 	printf("%s\n", "--------------------------");

// }