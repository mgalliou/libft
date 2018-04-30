/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:41:38 by mgalliou          #+#    #+#             */
/*   Updated: 2017/09/11 12:32:13 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_setenv(const char *name, const char *value, int overwrite)
{
	extern char	**environ;
	char		*var;
	int			i;
	int			len;

	if (!name)
		return (-1);
	if (!value)
		var = ft_strjoin(name, "=");
	else
		var = ft_strcjoin(name, value, '=');
	if (!var)
		return (-1);
	i = 0;
	len = ft_strlen(name);
	while (environ && environ[i])
	{
		if (ft_strnequ(environ[i], name, len) && environ[i][len] == '=' &&
				!overwrite)
			return (0);
		++i;
	}
	return (ft_putenv(var));
}
