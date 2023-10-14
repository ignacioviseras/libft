/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:17:34 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 20:06:45 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
}

// t_list	*ft_lstnewone(void *content)
// {
// 	t_list	*elem;

// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	if (!content)
// 		elem->content = NULL;
// 	else
// 		elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }

// int	main(void)
// {
// 	t_list		*elem3;
// 	char		*str3 = strdup("dolor");
// 	elem3 = ft_lstnewone(str3);

// 	t_list		*elem2;
// 	char		*str2 = strdup("asdf");
// 	elem3 = ft_lstnewone(str2);
// 	if (elem3)
// 		printf(elem3);
// 	else
// 		write(1, "NULL", 4);
// 	if (elem2)
// 		printf(elem2);
// 	else
// 		write(1, "NULL", 4);
// }