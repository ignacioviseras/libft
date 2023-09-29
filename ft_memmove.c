/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:17 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/29 19:34:21 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*msrc;
	char	*mdest;

	index = 0;
	msrc = ((char *)src);
	mdest = ((char *)dest);
	if (n == 0)
		return (mdest);
	if (dest > src && src + n > dest)
	{
		while (n--)
		{
			mdest[n] = msrc[n];
		}
	}
	else
	{
		ft_memcpy(mdest, msrc, n);
	}
	return (mdest);
}

// int	main(void)
// {

// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = "ABCDE";
// 	char sResult2[] = {67, 67, 68, 68, 69, 0};

// 	char ss[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s00[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy_[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult_[] = "ABCDE";
// 	char sResult2_[] = {67, 67, 68, 68, 69, 0, 45};

// 	// ft_memmove(s0, s, 7);
// 	// printf("%s\n", s0);
// 	// memmove(s00, ss, 7);
// 	// printf("%s\n", s00);

// 	// printf("%s\n", "--------------------");

// 	// ft_memmove(s, s + 2, 0);
// 	// printf("%s\n", s);
// 	// memmove(ss, ss + 2, 0);
// 	// printf("%s\n", ss);

// 	// printf("%s\n", "--------------------");

// 	// 	ft_memmove(s, s + 2, 2);
// 	// 	printf("%s\n", s);
// 	// 	memmove(ss, ss + 2, 2);
// 	// 	printf("%s\n", ss);

// 	// printf("%s\n", "--------------------");

// 	ft_memmove(sResult + 1, sResult, 2);
// 	printf("%s\n", sResult);
// 	memmove(sResult_ + 1, sResult_, 2);
// 	printf("%s\n", sResult_);

// 	printf("%s\n", "--------------------");

// 	// memmove(asd, qwe, 8);
// }
