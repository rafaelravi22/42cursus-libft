/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:46:08 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 19:47:12 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		k;

	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			k = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (k == -1)
		return (0);
	return ((char *)&s[k]);
}

// int main () 
// {
//   const char str[] = "http://www.tutorialspoint.com";
//   const char ch = '.';
//   char *result;

//   result = ft_strrchr(str, ch);
//   printf("String after a character is %s\n", result);
//   return(0);
// }
