/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:15:44 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/19 20:19:43 by igvisera         ###   ########.fr       */
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
