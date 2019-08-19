/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suite_ft_dlstnew.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 19:43:41 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/19 11:36:57 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"
#include "string.h"

static TEST(when_dlistnew_content_and_content_size_should_be_the_same)
{
	const char	*test = "test_string";
	t_dlist 	*dlst;

	dlst = ft_dlstnew(test, strlen(test));
	assert_str_equal((char*)test, dlst->content);
	assert_int_equal(strlen(test), dlst->content_size);
}

TEST_SUITE(suite_ft_dlstnew)
{
	RUN_TEST(when_dlistnew_content_and_content_size_should_be_the_same);
}

