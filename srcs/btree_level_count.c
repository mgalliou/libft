/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:44:04 by mgalliou          #+#    #+#             */
/*   Updated: 2017/07/21 14:22:32 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		get_lenght(t_btree *root, int lvl, int maxlvl)
{
	lvl++;
	if (root)
	{
		maxlvl = get_lenght(root->left, lvl, maxlvl);
		maxlvl = get_lenght(root->right, lvl, maxlvl);
	}
	if (lvl > maxlvl)
		maxlvl = lvl;
	return (maxlvl);
}

int		btree_level_count(t_btree *root)
{
	int	lvl;

	lvl = 0;
	if (root)
	{
		lvl = get_lenght(root->left, 0, lvl);
		lvl = get_lenght(root->right, 0, lvl);
	}
	return (lvl);
}
