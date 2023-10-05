/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:55:13 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/01 13:49:02 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *)s, len + 1);
	return (ptr);
}

/*
int main(void)
{
	char * s = ft_strdup((char*)"coucou");
	printf("%s\n", ft_strcmp(s, "coucou"));
	printf("%s\n", strcmp(s, "coucou"));
	free(s);
	printf("%s\n", "--------------------------");

	printf("%s\n", ft_strcmp(s, "coucou"));
	s = ft_strdup((char*)"");
	strcmp(s, "");
	free(s);
	write(1, "\n", 1);
}
*/