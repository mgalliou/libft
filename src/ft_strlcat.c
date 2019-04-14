/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:21:48 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:10:22 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = 0;
	if (size)
	{
		while (dst[dstlen] && dstlen < size)
			++dstlen;
		while (src[i] && i + dstlen < size - 1)
		{
			dst[i + dstlen] = src[i];
			++i;
		}
		if (dstlen + i < size)
			dst[i + dstlen] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
