/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:47:25 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/01 11:25:10 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memrealloc(void *ptr, size_t size)
{
	void	*new;
	size_t	plen;

	if (!ptr)
		return ((new = ft_memalloc(size)));
	plen = 0;
	while (((unsigned char*)ptr)[plen])
		++plen;
	if ((new = ft_memalloc(size)))
	{
		if (size <= plen)
			new = ft_memmove(new, ptr, size);
		else
			new = ft_memmove(new, ptr, plen);
	}
	ft_memdel(&ptr);
	return (new);
}
