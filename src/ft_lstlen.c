/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 11:18:45 by mgalliou          #+#    #+#             */
/*   Updated: 2019/05/06 11:22:53 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_lstlen(t_list *lst)
{
	int	n;
	
	n = 0;
	while (lst)
	{
		lst = lst->next;
		++n;
	}
	return (n);
}