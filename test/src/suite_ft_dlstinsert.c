/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suite_ft_dlstinsert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:20:26 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/20 12:33:07 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>

static TEST(when_used_on_null_list)
{
	char	*s = "test_string";
	t_dlist	*dlst;
	t_dlist	*cur;

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
	//insert item 
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	//check beg pointer item has expected content and is first
	cur = dlst;
	assert_not_null(cur);
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_null(cur->prev);
	assert_not_null(cur->next);
	//check second elem has expected content, is last and has first elem as prev
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
	char	*s3 = "test_string3";
	t_dlist	*dlst;
	t_dlist	*cur;
	t_dlist	*prev;

	dlst = NULL;
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	//insert on first elem
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s3, strlen(s3)));
	//check beg pointer item has expected content and is first
	cur = dlst;
	assert_not_null(cur);
	assert_str_equal(s3, cur->content);
	assert_int_equal(strlen(s3), cur->content_size);
	assert_null(dlst->prev);
	assert_not_null(dlst->next);
	//check second elem has expected content and first elem as prev
	prev = cur;
	cur = cur->next;
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	//check third elem has expected content, is last and has second elem as prev
	prev = cur;
	cur = cur->next;
	assert_not_null(cur);
	assert_str_equal(s1, cur->content);
	assert_int_equal(strlen(s1), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	assert_null(cur->next);
}

static TEST(when_used_on_second_elem_of_two_elem_list)
{
	char	*s1 = "test_string1";
	char	*s2 = "test_string2";
	char	*s3 = "test_string3";
	t_dlist	*dlst;
	t_dlist	*cur;
	t_dlist	*prev;

	dlst = NULL;
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	//insert on second elem
	cur = dlst->next;
	ft_dlstinsert(&cur, ft_dlstnewnocpy(s3, strlen(s3)));
	//check beg pointer item has expected content and is first
	cur = dlst;
	assert_not_null(cur);
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_not_null(dlst->next);
	assert_null(dlst->prev);
	//check second elem has expected content and first elem as prev
	prev = cur;
	cur = cur->next;
	assert_str_equal(s3, cur->content);
	assert_int_equal(strlen(s3), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	//check third elem has expected content, is last and has second elem as prev
	prev = cur;
	cur = cur->next;
	assert_not_null(cur);
	assert_str_equal(s1, cur->content);
	assert_int_equal(strlen(s1), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	assert_null(cur->next);
}

static TEST(when_used_on_second_elem_of_tree_elem_list)
{
	char	*s1 = "test_string1";
	char	*s2 = "test_string2";
	char	*s3 = "test_string3";
	char	*s4 = "test_string4";
	t_dlist	*dlst;
	t_dlist	*cur;
	t_dlist	*prev;

	dlst = NULL;
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s1, strlen(s1)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s2, strlen(s2)));
	ft_dlstinsert(&dlst, ft_dlstnewnocpy(s3, strlen(s3)));
	//insert on second elem
	cur = dlst->next;
	ft_dlstinsert(&cur, ft_dlstnewnocpy(s4, strlen(s4)));
	//check beg pointer item has expected content and is first
	cur = dlst;
	assert_not_null(cur);
	assert_str_equal(s3, cur->content);
	assert_int_equal(strlen(s3), cur->content_size);
	assert_not_null(dlst->next);
	assert_null(dlst->prev);
	//check second elem has expected content and first elem as prev
	prev = cur;
	cur = cur->next;
	assert_str_equal(s4, cur->content);
	assert_int_equal(strlen(s4), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	//check third elem has expected content and second elem as prev
	prev = cur;
	cur = cur->next;
	assert_str_equal(s2, cur->content);
	assert_int_equal(strlen(s2), cur->content_size);
	assert_ptr_equal(prev, cur->prev);
	//check forth elem has expected content and has third elem as prev
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
	RUN_TEST(when_used_on_second_elem_of_two_elem_list);
	RUN_TEST(when_used_on_second_elem_of_tree_elem_list);
}
