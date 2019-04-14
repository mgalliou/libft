/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:11:55 by mgalliou          #+#    #+#             */
/*   Updated: 2017/09/14 15:46:10 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>

int				ft_isdir(char const *path)
{
	struct stat	pathstat;

	if (!lstat(path, &pathstat) && S_ISDIR(pathstat.st_mode))
		return (1);
	return (0);
}
