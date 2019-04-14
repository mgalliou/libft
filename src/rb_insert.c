/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:44:31 by mgalliou          #+#    #+#             */
/*   Updated: 2018/04/09 18:57:22 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_rb_node	*create_node(void *item)
{
	t_rb_node		*tmp;

	tmp = ft_memalloc(sizeof(t_rb_node));
	if (tmp != NULL)
	{
		tmp->parent = NULL;
		tmp->left = NULL;
		tmp->right = NULL;
		tmp->item = item;
	}
	return (tmp);
}

void				rb_insert(struct s_rb_node **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (item)
	{
		if (!(*root))
			*root = create_node(item);
		else
		{
			if (cmpf && cmpf(((t_rb_node*)*root)->item, item) > 0)
			{
				rb_insert(&((t_rb_node*)*root)->left, item, cmpf);
				((t_rb_node*)*root)->left->parent = *root;
			}
			else
			{
				rb_insert(&((t_rb_node*)*root)->right, item, cmpf);
				((t_rb_node*)*root)->right->parent = *root;
			}
		}
	}
}
