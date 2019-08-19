/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suite_ft_dlstinsert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:20:26 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/19 18:26:37 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>

static TEST(when_used_on_null_list)
{
	char	*s = "test_string";
	t_dlist		*dlst;
	t_dlist		*cur;

	dlst = NULL;
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s, strlen(s)));
	cur = dlst;
	assert_not_null(cur);
	assert_str_equal(s, cur->content);
	assert_int_equal(strlen(s), cur->content_size);
	assert_null(cur->prev);
	assert_null(cur->next);
}

static TEST(when_used_on_list_with_one_item)
{
	char	*s1 = "test_string1";
	char	*s2 = "test_string2";
	t_dlist	*dlst;
	t_dlist	*cur;
	t_dlist	*prev;

	dlst = NULL;
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	cur = dlst;
	assert_not_null(cur);
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_null(cur->prev);
	assert_not_null(cur->next);
	prev = cur;
	cur = dlst->next;
	assert_str_equal(s1, cur->content);
	assert_int_equal(strlen(s1), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	assert_null(cur->next);
}

static TEST(when_used_on_first_elem_of_two_elem_list)
{
	char	*s1 = "test_string1";
	char	*s2 = "test_string2";
	char	*s3 = "test_string2";
	t_dlist	*dlst;
	t_dlist	*cur;
	t_dlist	*prev;

	dlst = NULL;
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s3, strlen(s3)));
	assert_not_null(dlst);
	cur = dlst;
	assert_str_equal(s3, cur->content);
	assert_int_equal(strlen(s3), cur->content_size);
	assert_null(dlst->prev);
	assert_not_null(dlst->next);
	prev = cur;
	cur = dlst->next;
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	prev = cur;
	cur = cur->next;
	assert_not_null(cur);
	assert_str_equal(s1, cur->content);
	assert_int_equal(strlen(s1), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	assert_null(cur->next);
}

TEST_SUITE(suite_ft_dlstinsert)
{
	RUN_TEST(when_used_on_null_list);
	RUN_TEST(when_used_on_list_with_one_item);
	RUN_TEST(when_used_on_first_elem_of_two_elem_list);
}
