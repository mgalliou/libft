/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:32:48 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:08:52 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcapitalize(char *s)
{
	int i;

	ft_strlowcase(s);
	i = 0;
	while (s[i])
	{
		if (!ft_isalnum(s[i - 1]) || i == 0)
			if ((s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = ft_toupper(s[i]);
				++i;
			}
		++i;
	}
	return (s);
}
