/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:38:35 by mgalliou          #+#    #+#             */
/*   Updated: 2020/02/11 11:44:10 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
	{
		++s;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (NULL);
}
