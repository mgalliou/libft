/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:05:13 by mgalliou          #+#    #+#             */
/*   Updated: 2020/02/11 11:30:36 by mgalliou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(int argc, char **argv)
{
	parse_args(argc, argv);
	RUN_TEST_SUITE(suite_ft_lstlen);
	RUN_TEST_SUITE(suite_ft_dlstnew);
	RUN_TEST_SUITE(suite_ft_dlstaddback);
	RUN_TEST_SUITE(suite_ft_dlstinsert);
	RUN_TEST_SUITE(suite_ft_atoi_base);
	RUN_TEST_SUITE(suite_ft_strchr);
	print_test_results();
}
