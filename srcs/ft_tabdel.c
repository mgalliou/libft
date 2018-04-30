/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:44:05 by mgalliou          #+#    #+#             */
/*   Updated: 2018/03/07 18:09:42 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_tabdel(char ***atab)
{
	char	**tmp;

	tmp = *atab;
	while (tmp && *tmp)
		ft_strdel(tmp++);
	ft_memdel((void*)atab);
}
