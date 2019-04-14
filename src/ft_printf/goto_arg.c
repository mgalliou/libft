/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goto_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 13:28:31 by mgalliou          #+#    #+#             */
/*   Updated: 2017/12/13 18:30:41 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		goto_arg(va_list *ap, int id, t_env *env)
{
	int		j;

	j = 1;
	va_copy(*ap, env->beg);
	while (j < id)
	{
		va_arg(*ap, void*);
		j++;
	}
}
