/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:49:50 by mgalliou          #+#    #+#             */
/*   Updated: 2017/09/07 14:30:14 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_unsetenv(const char *name)
{
	extern char	**environ;
	int			i;
	int			len;

	i = 0;
	if (!name)
		return (-1);
	len = ft_strlen(name);
	while (environ[i])
	{
		if (ft_strnequ(environ[i], name, len))
		{
			ft_strdel(&environ[i]);
			while (environ[i + 1])
			{
				environ[i] = environ[i + 1];
				++i;
			}
			environ[i] = NULL;
		}
		++i;
	}
	return (0);
}
