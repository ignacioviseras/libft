/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:25:14 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/26 20:19:49 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*mstr;

	if (!str)
		return (NULL);
	mstr = ((unsigned char *)str);
	index = 0;
	while (mstr[index] != '0' && index < n)
	{
		if (mstr[index] == ((unsigned char)c))
			return (mstr + index);
		index++;
	}
	return (NULL);
}

// int	main(void)
// {
// }