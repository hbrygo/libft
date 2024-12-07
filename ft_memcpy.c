/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:11:49 by hubrygo           #+#    #+#             */
/*   Updated: 2023/04/11 15:05:29 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*dest;

	i = 0;
	dest = dst;
	str = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
