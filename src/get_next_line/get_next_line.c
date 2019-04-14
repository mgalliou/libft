/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:35:15 by mgalliou          #+#    #+#             */
/*   Updated: 2017/12/13 18:28:49 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

static t_list		*initialize(int fd, t_list **beg, char **tmp, int *num)
{
	t_list			*cur;

	cur = *beg;
	while (cur && cur->FD != (size_t)fd)
		cur = cur->next;
	if (!cur)
	{
		if (!(cur = ft_lstnew(NULL, 0)))
			return (NULL);
		if (!(cur->BUF = ft_strnew(BUFF_SIZE)))
			return (NULL);
		cur->FD = (size_t)fd;
		ft_lstadd(beg, cur);
	}
	if (!(*tmp = ft_strdup(cur->BUF)))
		return (NULL);
	*num = 1;
	return (cur);
}

int					get_next_line(const int fd, char **line)
{
	static t_list	*beg = NULL;
	t_list			*cur;
	char			*tmp;
	int				num;

	if (fd < 0 || BUFF_SIZE < 1 || !(cur = initialize(fd, &beg, &tmp, &num)))
		return (-1);
	while (!ft_strchr(tmp, '\n') && num > 0)
	{
		if ((num = read(fd, cur->BUF, BUFF_SIZE)) <= 0 && !tmp[0])
			return (num);
		((char*)cur->BUF)[num] = '\0';
		if (!(*line = ft_strjoin(tmp, cur->BUF)))
			return (-1);
		ft_strdel(&tmp);
		tmp = *line;
	}
	num = 0;
	while (tmp[num] && tmp[num] != '\n')
		++num;
	if (!(*line = ft_strndup(tmp, num)))
		return (-1);
	cur->BUF = ft_strncpy(cur->BUF, &tmp[num + 1], ft_strlen(tmp) - num);
	ft_strdel(&tmp);
	return (1);
}
