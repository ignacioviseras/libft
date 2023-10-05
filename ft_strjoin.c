/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:19:58 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/05 20:44:21 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t lens1;
    size_t lens2;
    
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    if (!s1 || !s2)
        return (NULL);
    
}

// int main()
// {
    
// }