/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_id.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 13:48:09 by mgalliou          #+#    #+#             */
/*   Updated: 2017/12/13 18:30:33 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				get_id(t_env *env)
{
	int			start;
	int			res;

	start = env->i;
	res = 0;
	while (ft_isdigit(env->form[env->i]))
		env->i++;
	if (env->form[env->i] == '$')
	{
		res = ft_atoi(&env->form[start]);
		env->i++;
	}
	else
		env->i = start;
	return (res);
}
