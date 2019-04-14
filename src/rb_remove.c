/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_remove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:43:59 by mgalliou          #+#    #+#             */
/*   Updated: 2017/07/21 14:43:24 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
**static struct s_rb_node		*get_subtreemin(struct s_rb_node *node)
**{
**    while (node->left)
**        node = node->left;
**    return (node);
**}
**
**static void		remove_node(struct s_rb_node **root, void *item,
**                        void (*freef)(void *))
**{
**    struct s_rb_node	*tmp;
**    struct s_rb_node	*node;
**
**    node = *root;
**    if (node->left && node->right)
**    {
**        tmp = get_subtreemin(node->right);
**        node->item = tmp->item;
**        remove_node(&tmp, tmp->item, freef);
**    }
**    else if (!(*root)->parent)
**    {
**        tmp = NULL;
**        if (node->left && !node->right)
**            tmp = node->left;
**        else if (!node->left && node->right)
**            tmp = node->right;
**        *root = tmp;
**    }
**    else if (node->parent)
**    {
**        if (!node->left && !node->right)
**        {
**            if (node->parent->left == node)
**                node->parent->left = NULL;
**            else if (node->parent->right == node)
**                node->parent->right = NULL;
**        }
**        else
**        {
**            if (node->left && !node->right)
**                tmp = node->parent->left;
**            else if (node->left && !node->right)
**                tmp = node->parent->right;
**            if (node->parent->left == node)
**                node->parent->left = node->left;
**            else if (node->parent->right == node)
**                node->parent->right = node->left;
**            tmp->parent = node->parent;
**        }
**    }
**}
*/

void			rb_remove(struct s_rb_node **root, void *item,
						int (*cmpf)(void *, void *), void (*freef)(void *))
{
	int			dif;

	if (root && item)
	{
		dif = cmpf(item, ((struct s_rb_node*)*root)->item);
		if (dif > 0)
			rb_remove(&(*root)->left, item, cmpf, freef);
		else if (dif < 0)
			rb_remove(&(*root)->right, item, cmpf, freef);
	}
}
