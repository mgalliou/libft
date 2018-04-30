/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 16:37:54 by mgalliou          #+#    #+#             */
/*   Updated: 2017/07/13 15:19:26 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	btree_insert_data(t_btree **root, void *item,
				int (*cmpf)(void *, void *))
{
	if (item)
	{
		if (!(*root))
			*root = btree_create_node(item);
		else
		{
			if (cmpf && cmpf(((t_btree*)*root)->item, item) > 0)
				btree_insert_data(&((t_btree*)*root)->left, item, cmpf);
			else
				btree_insert_data(&((t_btree*)*root)->right, item, cmpf);
		}
	}
}
