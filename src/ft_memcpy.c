/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:19:46 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/14 15:52:55 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*p;

	p = dst;
	while (n--)
		(*(char*)p++) = (*(const char*)src++);
	return (dst);
}
