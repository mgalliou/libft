/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:39:29 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:09:51 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*tmp;

	tmp = s;
	if (s && f)
		while (*s)
		{
			f(&*s - &*tmp, &*s);
			++s;
		}
}
