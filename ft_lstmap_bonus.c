/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:59:15 by hubrygo           #+#    #+#             */
/*   Updated: 2023/04/13 14:18:05 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*ret;

	if (!lst || !del || !f)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&ret, del);
			free(temp);
			return (NULL);
		}
		ft_lstadd_back(&ret, temp);
		lst = lst->next;
	}
	return (ret);
}

//Fonction qui applique la fonction 'f' recu en argument a chaque element
//de la list avant de la renvoyer et qui libere 
//la memoire si une etape se passe mal