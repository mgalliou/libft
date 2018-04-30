/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:37:12 by mgalliou          #+#    #+#             */
/*   Updated: 2017/08/15 19:12:11 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *s)
{
	int		i;
	int		j;
	int		len;
	char	c;

	i = 0;
	j = 0;
	if (s)
	{
		while (s[j + 1])
			++j;
		len = j;
		while (j > (len / 2))
		{
			c = s[i];
			s[i++] = s[j];
			s[j--] = c;
		}
	}
	return (s);
}