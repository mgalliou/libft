/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:40:33 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:12:28 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *big, const char *little)
{
	size_t len;

	if (!(len = ft_strlen(little)))
		return ((char*)big);
	while (*big)
	{
		if (ft_strnequ(big, little, len))
			return ((char*)big);
		++big;
	}
	return (NULL);
}
