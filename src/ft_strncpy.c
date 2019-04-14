/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:58:47 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:03:17 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;

	s = dst;
	while (len && *src && (*s++ = *src++))
		--len;
	ft_bzero(s, len);
	return (dst);
}
