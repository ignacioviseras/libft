/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:52:02 by igvisera          #+#    #+#             */
/*   Updated: 2022/09/11 22:06:26 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	totat_mem;

	totat_mem = nmemb * size;
	if (nmemb != 0 && totat_mem / nmemb != size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, totat_mem);
	return (mem);
}
