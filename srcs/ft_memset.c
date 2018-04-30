/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:02:03 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/16 11:04:37 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memset(void *b, int c, size_t len)
{
	void	*a;

	a = b;
	while (len--)
		*(unsigned char*)a++ = (unsigned char)c;
	return (b);
}
