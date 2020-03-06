/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:41:31 by mgalliou          #+#    #+#             */
/*   Updated: 2020/03/06 13:04:08 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	base_is_valid(char *b)
{
	int l;

	if (!b)
	{
		return (0);
	}
	l = ft_strlen(b);
	if (!l || l == 1)
	{
		return (0);
	}
	while (*b && *b + 1)
	{
		if (*b == '+' || *b == '-' || ft_isspace(*b)
				|| ft_strchr(b + 1, *b))
		{
			return (0);
		}
		++b;
	}
	return (l);
}

int			ft_atoi_base(char *str, char *base)
{
	int		n;
	int		r;
	int		l;
	char	*c;

	n = 1;
	r = 0;
	l = base_is_valid(base);
	if (!l)
	{
		return (0);
	}
	while (ft_isspace(*str))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			n = -n;
		++str;
	}
	while (*str && (c = ft_strchr(base, *str++)))
	{
		r = r * l + c - base;
	}
	return (r * n);
}
