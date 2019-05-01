/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:55:49 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/01 12:13:41 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_putnbr_base(uintmax_t n, int base)
{
	if (n >= (uintmax_t)base)
	{
		ft_putnbr_base(n / base, base);
		ft_putnbr_base(n % base, base);
	}
	else if (n % base < 1)
		ft_putchar(n + 48);
	else
		ft_putchar(n + 55);

}
