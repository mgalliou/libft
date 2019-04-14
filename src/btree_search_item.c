/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 14:31:55 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 18:24:01 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*btree_search_item(t_btree *root, void *data_ref,
				int (*cmpf)(void *, void *))
{
	t_btree	*tmp;

	tmp = NULL;
	if (root)
	{
		tmp = btree_search_item(root->left, data_ref, cmpf);
		if (!cmpf(data_ref, tmp->item))
			return (tmp);
		tmp = btree_search_item(root->right, data_ref, cmpf);
	}
	return (tmp);
}
