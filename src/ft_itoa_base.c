/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 11:14:57 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/01 12:01:26 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_itoa_base(uintmax_t n, int base)
{
	int		nbrlen;
	char	*str;

	nbrlen = ft_nbrlen_base(n, base);
	if (!(str = ft_memalloc(sizeof(char) * (nbrlen + 1))))
		return (NULL);
	str[nbrlen] = '\0';
	while (nbrlen--)
	{
		if (n % base < 10)
			str[nbrlen] = n % base + 48;
		else
			str[nbrlen] = n % base + 55;
		n /= base;
	}
	return (str);
}
