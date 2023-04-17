/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:19:11 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 20:27:53 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s)
		return (d);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (n--)
		d[n] = s[n];
	return (d);
}

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	char	*d;
// 	char	*s;
// 	size_t	i;

// 	d = (char*)dst;
// 	s = (char*)src;
// 	i = 0;
// 	if (d == s)
// 		return (d);
// 	if (s < d)
// 	{
// 		i = len;
// 		while (i--)
// 			((char*)d)[i] = ((char*)s)[i];
// 	}
// 	else
// 	{
// 		i = 0;
// 		while (i < len)
// 		{
// 			((char*)d)[i] = ((char*)s)[i];
// 			i++;
// 		}
// 	}
// 	return (d);
// }
