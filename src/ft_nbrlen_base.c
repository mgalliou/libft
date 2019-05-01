/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:01:07 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/01 12:01:39 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_nbrlen_base(uintmax_t n, int base)
{
	int		i;

	i = 1;
	while (n >= (uintmax_t)base)
	{
		n /= base;
		++i;
	}
	return (i);
}
