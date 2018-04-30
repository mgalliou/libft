/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:07:24 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/07 14:08:27 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		len;

	dst = NULL;
	if (s1 && s2)
	{
		len = ft_strlen(s1);
		if (!(dst = ft_strnew(sizeof(char) * (len + ft_strlen(s2)))))
			return (NULL);
		{
			ft_strcpy(dst, s1);
			ft_strcpy(&dst[len], s2);
		}
	}
	return (dst);
}
