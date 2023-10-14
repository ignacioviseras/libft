/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:39:00 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 11:42:11 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    size_t index;
    size_t indexStr;
    size_t x;
    char    **moveStr;
    char    **str;


    index = 0;
    indexStr = 0;
    x = 0;
    str = (char *)ft_calloc(ft_strlen(indexStr), sizeof(char));
    while (s[index] != '\0')
    {
        while (s[index] != c)
        {
            moveStr[x][indexStr] = s[index];
            index++;
            indexStr++;
        }
        if (!str)
            return (NULL);
        x++;
        index++;
    }
}

char    ()
{
    
}

int main()
{

}
