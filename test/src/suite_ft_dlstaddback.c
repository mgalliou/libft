/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suite_ft_dlstaddback.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 19:41:27 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/19 17:52:25 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>

static TEST(when_used_on_null_list_should_be_first_elem)
{
	char	*s = "test_string";
	t_dlist		*dlst;

	dlst = NULL;
	ft_dlstaddback(&dlst, ft_dlstnewnocpy(s, strlen(s)));
	assert_str_equal(s, dlst->content);
	assert_int_equal(strlen(s), dlst->content_size);
	assert_null(dlst->prev);
	assert_null(dlst->next);
}

static TEST(when_used_on_list_with_one_item)
{
	char	*s1 = "test_string1";
	char	*s2 = "test_string2";
	t_dlist	*dlst;
	t_dlist	*cur;

	dlst = NULL;
	ft_dlstaddback(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstaddback(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	assert_str_equal(s1, dlst->content);
	assert_int_equal(strlen(s1), dlst->content_size);
	assert_not_null(dlst->next);
	cur = dlst->next;
	assert_not_null(cur->prev);
	assert_ptr_equal(dlst, cur->prev);
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
}

static TEST(when_used_on_list_with_two_item)
{
	char	*s1 = "test_string1";
	char	*s2 = "test_string3";
	char	*s3 = "test_string3";
	t_dlist	*dlst;
	t_dlist	*cur;
	t_dlist	*prev;

	dlst = NULL;
	ft_dlstaddback(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstaddback(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	ft_dlstaddback(&dlst, ft_dlstnewnocpy(s3, strlen(s3)));
	assert_str_equal(s1, dlst->content);
	assert_int_equal(strlen(s1), dlst->content_size);
	assert_not_null(dlst->next);
	assert_null(dlst->prev);
	cur = dlst->next;
	assert_not_null(cur->prev);
	assert_ptr_equal(dlst, cur->prev);
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_not_null(cur->next);
	prev = cur;
	cur = cur->next;
	assert_not_null(cur->prev);
	assert_ptr_equal(prev, cur->prev);
	assert_str_equal(s3, cur->content);
	assert_int_equal(strlen(s3), cur->content_size);
	assert_null(cur->next);
}

TEST_SUITE(suite_ft_dlstaddback)
{
	RUN_TEST(when_used_on_null_list_should_be_first_elem);
	RUN_TEST(when_used_on_list_with_one_item);
	RUN_TEST(when_used_on_list_with_two_item);
}
