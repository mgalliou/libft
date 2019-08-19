/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suite_ft_lstlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 10:55:25 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/19 12:01:37 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

static TEST(ft_lstlen_on_empty_list_should_return_zero)
{
	t_list *lst;

	lst = NULL;
	assert_int_equal(0, ft_lstlen(lst));
}

static TEST(ft_lstlen_should_return_list_len)
{
	t_list	*lst;
	char	c = 'a';

	lst = NULL;
	ft_lstaddback(&lst, ft_lstnewnocpy(&c, sizeof(char)));
	ft_lstaddback(&lst, ft_lstnewnocpy(&c, sizeof(char)));
	ft_lstaddback(&lst, ft_lstnewnocpy(&c, sizeof(char)));
	assert_int_equal(3, ft_lstlen(lst));
}

static TEST(random_test)
{
}

TEST_SUITE(suite_ft_lstlen)
{
	RUN_TEST(ft_lstlen_should_return_list_len);
	RUN_TEST(ft_lstlen_on_empty_list_should_return_zero);
	RUN_TEST(random_test);
}
