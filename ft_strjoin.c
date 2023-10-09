/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:19:58 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/07 21:22:35 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *c1;
    //char    *c2;
    size_t  len_max;
    
    len_max = (ft_strlen(s1) + ft_strlen(s2));
    if (!s1 || !s2)
        return (NULL);
	  c1 = (char *)ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2)));
	  //c2 = (char *)malloc(sizeof(char) * ft_strlen(s2));
    //if (!c1 || !c2)
    if (!c1)
		  return (NULL);
    ft_strlcpy(c1, (char *)s1, ft_strlen((const char *)s1)+1);
    ft_strlcat(c1, s2, len_max+1);
    //ft_memcpy(c1, ft_strlcpy((char *)s1, (char *)s2, ft_strlen((const char *)s2)), len_max);
    return (c1);
}

int main()
{
  char const *str = "i just want this part #############";
  char const *str2 = "qqqqqqq";
  // ft_strjoin(str, str2);
  printf("asd:%s\n", ft_strjoin(str, str2));
  return (0);
}