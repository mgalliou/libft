/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstaddback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 19:50:13 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/27 19:52:19 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dlstaddback(t_dlist **adlst, t_dlist *new)
{
	t_dlist *tmp;

	tmp = *adlst;
	if (new)
	{
		if (tmp)
		{
			while (tmp && tmp->next)
				tmp = tmp->next;
			tmp->next = new;
			new->prev = tmp;
		}
		else
			*adlst = new;
	}
}
