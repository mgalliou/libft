/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:36:02 by mgalliou          #+#    #+#             */
/*   Updated: 2019/04/14 11:44:40 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		print(va_list *ap, t_env *env)
{
	while (env->form[env->i])
	{
		if (env->form[env->i] == '%')
		{
			env->conv = convnew(env->conv);
			get_conv(ap, env);
			if (env->conv->type)
			{
				if (conv_to_buffer(ap, env) == -1)
					return (-1);
				env->i++;
			}
		}
		else
			normal_to_buffer(env);
	}
	print_buffer(env);
	return (env->ret);
}

int				ft_printf(const char *format, ...)
{
	t_env		*env;
	va_list		ap;
	int			new_ret;

	if (!(env = envnew(format)))
		return (-1);
	va_start(ap, format);
	va_copy(env->beg, ap);
	new_ret = print(&ap, env);
	va_end(ap);
	if (env->ret != -1)
		env->ret = new_ret;
	return (env->ret);
}
