/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 12:51:31 by mgalliou          #+#    #+#             */
/*   Updated: 2020/03/06 13:05:40 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <libft.h>

t_flags		*flagsnew(void)
{
	static t_flags new;

	new.hash = 0;
	new.zero = 0;
	new.min = 0;
	new.space = 0;
	new.plus = 0;
	new.apos = 0;
	return (&new);
}

t_conv		*convnew(void)
{
	static t_conv new;

	new.flags = flagsnew();
	new.id = 0;
	new.width = 0;
	new.preci = -1;
	new.len = NONE;
	new.type = 0;
	return (&new);
}

t_env		*envnew(const char *format)
{
	static t_env	new;

	new.form = format;
	new.i = 0;
	new.j = 0;
	new.ret = 0;
	new.fd = 1;
	return (&new);
}
