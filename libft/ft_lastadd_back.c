/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastaddback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:25:07 by rafamart          #+#    #+#             */
/*   Updated: 2023/04/20 21:26:00 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultm;

	if (!lst || !new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ultm = ft_lstlast(*lst);
	ultm->next = new;
}
