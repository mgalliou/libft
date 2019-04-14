/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:36:45 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/07 14:49:49 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
				int current_level, int is_first_elem))
{
	(void)root;
	(void)applyf;
}
