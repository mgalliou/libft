/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:27:08 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 12:35:06 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*tmp;

	if (src && size)
	{
		tmp = src;
		while (*tmp && --size)
			*dst++ = *tmp++;
		*dst = '\0';
	}
	if (src)
		return (ft_strlen(src));
	return (0);
}
