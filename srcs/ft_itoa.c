/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:52:25 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:05:39 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_itoa(int n)
{
	int		neg;
	int		nbrlen;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	nbrlen = ft_nbrlen(n) + neg;
	if (!(str = ft_memalloc(sizeof(char) * (nbrlen + 1))))
		return (NULL);
	str[nbrlen] = '\0';
	while (nbrlen--)
	{
		str[nbrlen] = n % 10 + 48;
		n /= 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
