/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 11:03:17 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 18:21:26 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_wstrlen(wchar_t *wstr)
{
	int		n;

	n = 0;
	if (!wstr)
		return (0);
	while (*wstr)
		n += ft_wcharlen(*wstr++);
	return (n);
}
