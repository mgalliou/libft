/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:47:53 by mgalliou          #+#    #+#             */
/*   Updated: 2018/04/09 15:38:10 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_tabdup(char **tab)
{
	char	**dst;
	char	**tmp;

	tmp = (char**)tab;
	while (*tmp)
		++tmp;
	if (!(dst = ft_memalloc(sizeof(char*) * (tmp - (char**)tab + 1))))
		return (NULL);
	tmp = dst;
	while (*tab)
		*tmp++ = ft_strdup(*tab++);
	*tmp = NULL;
	return (dst);
}
