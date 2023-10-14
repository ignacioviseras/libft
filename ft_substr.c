/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:03:39 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 19:33:10 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*substr;
	char			*schar;

	index = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	schar = (char *)s;
	while (s[index])
	{
		if (index == start)
		{
			ft_strlcpy(substr, schar + index, len + 1);
			return (substr);
		}
		index++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char *manolo;
// 	// manolo = ft_substr("Pedro que tal", 4, 6);
// 	// printf("%s-\n", manolo);
// 	// free(manolo);
// 	// char *mateo;
// 	// mateo = ft_substr("Pedro que tal", 2, 2);
// 	// printf("%s-\n", mateo);
// 	// free(mateo);
// 	// char *lorem;
// 	// lorem = ft_substr("lorem ipsum", 0, 10);
// 	// printf("%s-\n", lorem);
// 	// return (0);
//  	char *str = "i just want this part #############";
//  	size_t size = 20;
//  	char *ret = ft_substr(str, 5, size);

//  	if (!ft_strncmp(ret, str + 5, size))
//  	{
// 		printf("res: %s\n", ret);
//  		free(ret);
//  	}
// }