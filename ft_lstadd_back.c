/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 04:15:55 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 13:52:12 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *newlts)
{
    t_list  *iter;

	if (lst)
	{
		if (*lst)
		{
            iter = *lst;
			while (iter->next != NULL)
			{
				iter = iter->next;
			}
			iter->next = newlts;
		}
        else{
		    *lst = newlts;
        }
	}
}
