/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:41:10 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/09 19:17:43 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t  index;
    char    *str;

	index = 0;

    str = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
    if (!str)
        return (NULL);
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
    return (str);

}