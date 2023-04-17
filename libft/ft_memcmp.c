/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:53:52 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 20:05:22 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((str1[i]) - (str2[i]));
		i++;
	}
	return (0);
}

// int main () 
// {
//   char str1[15] = "abcdef";
//   char str2[15] = "abcdef";
//   int result;

//   result = ft_memcmp(str1, str2, 5);
//   if(result > 0)
//   {
//   printf("str2 is less than str1");
//   } 
//   else if(result < 0) 
//   {
//    printf("str1 is less than str2");
//   } 
//   else 
//   {
//   printf("str1 is equal to str2");
//   }
//   return(0);
// }
