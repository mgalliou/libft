/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:05:13 by mgalliou          #+#    #+#             */
/*   Updated: 2019/08/19 17:24:55 by mgalliou         ###   ########.fr       */
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
	print_test_results();
}
