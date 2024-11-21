#include "unity.h"
#include "../libft.h"

void test_ft_isdigit_basic(void) {
    TEST_ASSERT_TRUE(ft_isdigit('0'));
    TEST_ASSERT_TRUE(ft_isdigit('5'));
    TEST_ASSERT_TRUE(ft_isdigit('9'));
    TEST_ASSERT_FALSE(ft_isdigit('a'));
    TEST_ASSERT_FALSE(ft_isdigit(' '));
}

void test_ft_isdigit_extended(void) {
    for (int i = '0'; i <= '9'; i++) {
        TEST_ASSERT_TRUE(ft_isdigit(i));
    }
    TEST_ASSERT_FALSE(ft_isdigit('a'));
    TEST_ASSERT_FALSE(ft_isdigit('/'));
}
