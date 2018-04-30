/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:24:21 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/14 17:35:18 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	*ft_memcpy_rev(void *dst, const void *src, size_t n)
{
	void	*p;

	p = dst;
	p += n - 1;
	src += n - 1;
	while (n--)
		*(unsigned char*)p-- = *(unsigned char*)src--;
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		return (ft_memcpy_rev(dst, src, len));
	return (dst);
}
