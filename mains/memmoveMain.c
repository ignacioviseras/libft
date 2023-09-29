/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmoveMain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:51:27 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/24 13:51:33 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[50] = "-qwe-qwe-qwe-qwe-qwe-qwe";
	char src[12] = "Hola_asd_tal";

	memmove(dst, src, 8);
	printf("%s\n", dst);
}