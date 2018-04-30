/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:21:31 by mgalliou          #+#    #+#             */
/*   Updated: 2017/07/21 14:22:14 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstsort(t_list *beg, int cmp(t_list *a, t_list *b))
{
	t_list	*tmp;
	void	*ptr;

	tmp = beg;
	while (tmp->next)
	{
		if (cmp(tmp, tmp->next))
		{
			ptr = tmp->next->content;
			tmp->next->content = tmp->content;
			tmp->content = ptr;
			tmp = beg;
		}
		tmp = tmp->next;
	}
	return (beg);
}
