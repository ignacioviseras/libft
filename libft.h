/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:13:49 by igvisera          #+#    #+#             */
/*   Updated: 2022/09/27 23:31:54 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalpha(int str);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_atoi(const char *nptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
//char	*ft_strnstr(char *big, char *little, size_t len);
char	*ft_strnstr(const char	*big, const char *little, size_t len);

#endif

/*
if (!*little)
return ((char *)big);
	i = 0;
	while (big[i] && i != len)
	{
		j = 0;
		while (big[i + j] && little[j] &&
		big[i + j] == little[j] && i + j != len)
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
*/