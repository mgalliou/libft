/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:41:51 by mgalliou          #+#    #+#             */
/*   Updated: 2017/09/28 10:36:37 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	rb_delete(t_rb_node **root, void (*freef)(void *))
{
	t_rb_node *tmp;

	tmp = *root;
	if (tmp)
	{
		rb_delete(&tmp->left, freef);
		rb_delete(&tmp->right, freef);
		if (freef)
			freef(tmp->item);
		ft_memdel((void*)&tmp);
	}
}
