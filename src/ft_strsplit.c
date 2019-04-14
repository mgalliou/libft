/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:50:08 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:12:21 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**beg;
	char	**tab;

	if (!s || !(tab = ft_memalloc(sizeof(char**) *
			(ft_wordcount((char*)s, c) + 1))))
		return (NULL);
	beg = tab;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		i = ft_strclen(s, c);
		if (*s && *s != c)
			*tab++ = ft_strndup(s, i);
		s += i;
	}
	*tab = NULL;
	return (beg);
}
