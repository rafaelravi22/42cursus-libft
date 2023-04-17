/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:39:23 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 19:40:31 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}	
	return (s);
}

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	char *p;

// 	p = (char *)b;
// 	while (len > 0)
// 	{
// 		*p = c;
// 		p++;
// 		len--;
// 	}
// 	return (b);
// }
