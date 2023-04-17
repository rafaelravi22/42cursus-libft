/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:29:33 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 20:33:22 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

// int main () 
// {
//   const char str[] = "http://www.tutorialspoint.com";
//   const char ch = 'n';
//   char *result;

//   result = ft_memchr(str, ch, 50);

//   printf("String after character is %s\n", result);

//   return(0);
// }
