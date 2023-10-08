/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:36:57 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/08 20:00:52 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t  index;
    size_t  rIndex;

    str = NULL;
    if (s1 != '\0' && set != '\0')
    {
        index = 0;
        rIndex = ft_strlen(s1);
        while (s1[index] && ft_strchr(set, s1[index]))
            index++;
        while (s1[rIndex-1] && ft_strchr(set, s1[rIndex -1]) && rIndex > index)
            rIndex--;
	    str = (char *)ft_calloc(sizeof(char), rIndex - index +1);
        if (str)
            ft_strlcpy(str, (char *)&s1[index], rIndex - index +1);
    }
    return (str);
}

    // char    *str;
    // size_t  index;
    // size_t  rIndex;

    // str = NULL;
    // if (!s1 && !set)
    // {
    //     index = 0;
    //     rIndex = ft_strlen(s1);
    //     while (s1[index] && ft_strchr(set, s1[index]))
    //         index++;
    //     while (s1[rIndex-1] && ft_strchr(set, s1[rIndex -1]) && rIndex > index)
    //         rIndex--;
	//     str = (char *)ft_calloc(sizeof(char), rIndex - index +1);
    //     if (str)
    //         ft_strlcpy(str, (char *)&s1[index], rIndex - index +1);
    // }
    //     return (str);

//----------------


    
// int main()
// {
//     printf("%s\n", ft_strtrim("qqaqqHola", "q"));
//     printf("%s\n", ft_strtrim("qqaqqHoqlaqqqwqq", "q"));
//     printf("%s\n", ft_strtrim("qqaqqHoqlaqqqwqq", "qw"));
//     return (0);
// }