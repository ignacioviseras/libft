/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:17 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/19 20:18:31 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*msrc;
	char	*mdest;

	index = 0;
	msrc = ((char *)src);
	mdest = ((char *)dest);
	if (n == 0)
		return (mdest);
	if (dest > src && src + n > dest)
	{
		while (n--)
		{
			mdest[n] = msrc[n];
		}
	}
	else
	{
		ft_memcpy(mdest, msrc, n);
	}
	return (mdest);
}
