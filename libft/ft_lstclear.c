/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:08:34 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/20 21:26:12 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*suc;

	if (!lst || !del)
		return (NULL);
	while (*lst)
	{
		suc = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = suc;
	}
}
