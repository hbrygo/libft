/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:26:08 by hubrygo           #+#    #+#             */
/*   Updated: 2023/04/10 20:00:59 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst)
		return (NULL);
	if (lst->next)
	{
		lst = lst->next;
		ft_lstclear(lst, del);
	}
	del(lst->next);
	lst->content = NULL;
	return ;
}
