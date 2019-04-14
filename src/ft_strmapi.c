/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:40:14 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:11:06 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	char	*tmp;

	if (!s || !(dst = ft_memalloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	tmp = dst;
	while (*s)
	{
		*tmp = f(&*tmp - &*dst, *s++);
		++tmp;
	}
	*tmp = '\0';
	return (dst);
}
