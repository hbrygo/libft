/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:59:15 by hubrygo           #+#    #+#             */
/*   Updated: 2023/04/10 20:04:15 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	while (lst->next)
	{
		temp = ft_lstnew(f(lst->content));
		if(!temp)
		{
			del(temp);
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&lst, temp);
		lst = lst->next;
	}
	return (lst);
}
