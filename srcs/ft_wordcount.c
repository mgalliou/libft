/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:55:17 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:13:32 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_wordcount(char const *str, char c)
{
	int	n;

	n = 0;
	while (*str)
	{
		while (*str && *str == c)
			++str;
		if (*str && *str != c)
			++n;
		while (*str && *str != c)
			++str;
	}
	return (n);
}
