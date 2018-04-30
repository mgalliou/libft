/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:41:05 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/14 17:38:13 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strndup(const char *s1, size_t n)
{
	char	*dst;

	if (!(dst = ft_memalloc(sizeof(char) * (n + 1))))
		return (NULL);
	return (ft_strncpy(dst, s1, n));
}
