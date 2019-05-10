#include "libftest.h"
#include "libft.h"

TEST(ft_lstlen_on_empty_list_should_return_zero)
{
	t_list *lst;

	lst = NULL;
	assert_int_equal(0, ft_lstlen(lst));
}

TEST(ft_lstlen_should_return_list_len)
{
	t_list	*lst;
	char	c = 'a';

	lst = NULL;
	ft_lstaddback(&lst, ft_lstnewnocpy(&c, sizeof(char)));
	ft_lstaddback(&lst, ft_lstnewnocpy(&c, sizeof(char)));
	ft_lstaddback(&lst, ft_lstnewnocpy(&c, sizeof(char)));
	assert_int_equal(3, ft_lstlen(lst));
}

TEST_SUITE(list_test_suite_1)
{
	RUN_TEST(ft_lstlen_should_return_list_len);
	RUN_TEST(ft_lstlen_on_empty_list_should_return_zero);
}

int main(void)
{
	RUN_TEST_SUITE(list_test_suite_1);
	print_test_results();
}
