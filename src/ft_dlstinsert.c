/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 22:30:38 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/27 22:36:12 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dlstinsert(t_dlist **adlst, t_dlist *new)
{
	t_dlist *tmp;

	tmp = *adlst;
	if (new)
	{
		if (tmp)
		{
			if (tmp->prev == NULL)
			{
				ft_lstadd((t_list**)adlst, (t_list*)new);
			}
			else
			{
				new->prev = tmp->prev;
				tmp->prev->next = new;
				new->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = new;
			}
		}
	}
}
