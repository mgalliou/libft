/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:18:45 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/14 17:31:03 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
		if ((*(unsigned char*)dst++ = *(unsigned char*)src++) ==
				(unsigned char)c)
			return (dst);
	return (NULL);
}
