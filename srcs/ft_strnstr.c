/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:15:33 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:11:37 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t l;

	if (!(l = ft_strlen(little)))
		return ((char*)big);
	while (*big && l <= len)
	{
		if (ft_strnequ(big, little, l))
			return ((char*)big);
		++big;
		--len;
	}
	return (NULL);
}
