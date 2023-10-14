/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:06:04 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 20:59:45 by igvisera         ###   ########.fr       */
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
		if (s[index] == (unsigned char)c)
			return ((char *)s + index);
		index++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
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