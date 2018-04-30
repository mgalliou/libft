/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:55:12 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:12:50 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strtrim(char const *s)
{
	const char	*tmp;

	if (!s)
		return (NULL);
	while ((ft_isblank(*s) || *s == '\n'))
		++s;
	tmp = s;
	while (*tmp)
		++tmp;
	while (tmp > s && (ft_isblank(*(tmp - 1)) || *(tmp - 1) == '\n'))
		--tmp;
	return (ft_strndup(s, tmp - s));
}
