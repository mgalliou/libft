/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:31:31 by mgalliou          #+#    #+#             */
/*   Updated: 2018/04/12 13:50:05 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrealloc(char *str, size_t size)
{
	char	*new;
	size_t	len;

	if (!str)
		return ((new = ft_memalloc(size)));
	len = ft_strlen(str);
	if ((new = ft_memalloc(sizeof(char) * (size + 1))))
		new = ft_strncpy(new, str, size);
	ft_strdel(&str);
	return (new);
}
