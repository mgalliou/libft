/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 12:53:11 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/23 12:56:19 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dlstremove(t_dlist **adlst, t_dlist *elem)
{
	if (!elem->prev && *adlst == elem)
	{
		*adlst = elem->next;
		if (*adlst)
		{
			(*adlst)->prev = NULL;
		}
	}
	else
	{
		elem->prev->next = elem->next;
		if (elem->next)
		{
			elem->next->prev = elem->prev;
		}
	}
}
