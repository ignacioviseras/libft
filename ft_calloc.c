/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:52:02 by igvisera          #+#    #+#             */
/*   Updated: 2023/03/27 20:43:05 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_mem;

	total_mem = nmemb * size;
	if (nmemb != 0 && total_mem / nmemb != size)
		return (NULL);
	mem = malloc(total_mem);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total_mem);
	return (mem);
}
