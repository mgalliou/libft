/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_align.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:10:27 by mgalliou          #+#    #+#             */
/*   Updated: 2019/07/24 16:16:21 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_ptr_align(void *ptr, size_t align)
{
	int offset;

	if (ptr && align > 0)
	{
		offset = (size_t)ptr % align;
		if (offset > 0)
		{
			ptr = (unsigned char*)ptr + align - offset;
		}
	}
	return (ptr);
}
