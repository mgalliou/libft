/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:16:15 by mgalliou          #+#    #+#             */
/*   Updated: 2018/04/09 15:41:16 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		addnewtoenv(char *string, int i, int *first)
{
	extern char	**environ;
	char		**newenvi;

	if (!(newenvi = ft_memalloc(sizeof(char*) * (i + 2))))
		return (-1);
	i = 0;
	while (environ && environ[i])
	{
		if (!(newenvi[i] = ft_strdup(environ[i])))
		{
			ft_tabdel(&newenvi);
			return (-1);
		}
		i++;
	}
	newenvi[i++] = string;
	newenvi[i] = NULL;
	if (*first)
		*first = 0;
	else
		ft_tabdel(&environ);
	environ = newenvi;
	return (0);
}

int				ft_putenv(char *string)
{
	extern char	**environ;
	int			i;
	int			len;
	static int	first = 1;

	i = 0;
	len = ft_strclen(string, '=');
	while (environ && environ[i])
	{
		if (ft_strnequ(environ[i], string, len) && environ[i][len] == '=')
		{
			if (first)
			{
				environ = ft_tabdup(environ);
				first = 0;
			}
			ft_strdel(&environ[i]);
			environ[i] = string;
			return (0);
		}
		++i;
	}
	return (addnewtoenv(string, i, &first));
}
