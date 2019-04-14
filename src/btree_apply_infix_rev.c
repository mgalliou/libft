/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix_rev.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:23:02 by mgalliou          #+#    #+#             */
/*   Updated: 2017/07/07 15:23:30 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	btree_apply_infix_rev(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_infix(root->right, applyf);
		applyf(root->item);
		btree_apply_infix(root->left, applyf);
	}
}
