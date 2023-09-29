/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:27:51 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/29 19:21:37 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			index;
	unsigned char	*mstr1;
	unsigned char	*mstr2;

	mstr1 = (unsigned char *)str1;
	mstr2 = (unsigned char *)str2;
	index = 0;
	while (index < n)
	{
		if (mstr1[index] != mstr2[index])
			return (mstr1[index] - mstr2[index]);
		index++;
	}
	return (0);
}

// int main()
// {
//     printf("%s\n", ft_memcmp("qwe", "awd", 4));
// }