/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:33:44 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 18:53:11 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}

// #include <stdio.h>

// int main () 
// {
//   const char s[] = "http://www.tutorialspoint.com";
//   const char c = 'i';
//   char *result;

//   result = ft_strchr(s, c);
//   printf("String after a character is %s\n", result);
//   return(0);
// }
