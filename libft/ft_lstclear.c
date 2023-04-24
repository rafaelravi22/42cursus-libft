/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:08:34 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/24 16:31:04 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*suc;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		suc = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = suc;
	}
}
