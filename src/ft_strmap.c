/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:44:38 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 18:54:28 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*tmp;

	if (!s || !(dst = ft_memalloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	tmp = dst;
	while (*s)
		*tmp++ = f(*s++);
	*tmp = '\0';
	return (dst);
}
