/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 22:30:38 by mgalliou          #+#    #+#             */
/*   Updated: 2020/03/06 13:04:37 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dlstinsert(t_dlist **adlst, t_dlist *new)
{
	t_dlist *tmp;

	tmp = *adlst;
	if (new)
	{
		if (!tmp)
			*adlst = new;
		else if (!tmp->prev)
		{
			*adlst = new;
			new->next = tmp;
			tmp->prev = new;
		}
		else
		{
			new->prev = tmp->prev;
			if (new->prev)
			{
				new->prev->next = new;
			}
			new->next = tmp;
			tmp->prev = new;
		}
	}
}
