/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:41:26 by mgalliou          #+#    #+#             */
/*   Updated: 2018/04/10 18:18:47 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_getenv(const char *name)
{
	extern char	**environ;
	char		**ptr;
	size_t		len;

	ptr = environ;
	if (ptr)
	{
		len = ft_strlen(name);
		while (*ptr)
		{
			if (len < ft_strlen(*ptr) && (*ptr)[len] == '=' &&
					(*ptr)[len + 1] && ft_strnequ(name, *ptr, len))
				return (&(*ptr)[len + 1]);
			++ptr;
		}
	}
	return (NULL);
}
