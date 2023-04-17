/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:01:13 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/17 18:35:35 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i + j < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(&str[i]));
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main () 
// {
// const char str[20] = "TutorialsPoint";
// const char to_find[10] = "";
// char *result;

// result = ft_strnstr(str, to_find, 20);
// printf("The substring is: %s\n", result);
// return(0);
// }
