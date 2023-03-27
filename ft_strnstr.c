/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:55:15 by igvisera          #+#    #+#             */
/*   Updated: 2022/09/28 22:15:03 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*si le se pone asi peta 
char	*ft_strnstr(const char	*big, const char *little, size_t len);
tiene q estar de esa manera*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i != len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j]
			&& i + j != len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
/*		
mirar codigo esta opcion
	while ((big[i + j] == little[j]) && (big[i + j] != '\0') && (len > i
					+ j))
*/
