/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:26:55 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/16 12:54:25 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char*)s;
	while (*t)
		++t;
	while (t >= s)
	{
		if (*t == c)
			return (t);
		--t;
	}
	return (NULL);
}
