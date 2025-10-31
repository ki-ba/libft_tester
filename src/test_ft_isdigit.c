#include "unity.h"
#include "libft.h"
#include "test.h"
#include <ctype.h>
#include <limits.h>

void test_ft_isdigit_basic(void) {
    TEST_ASSERT_TRUE(ft_isdigit('0'));
    TEST_ASSERT_TRUE(ft_isdigit('5'));
    TEST_ASSERT_TRUE(ft_isdigit('9'));
    TEST_ASSERT_FALSE(ft_isdigit('a'));
    TEST_ASSERT_FALSE(ft_isdigit(' '));
}

void test_ft_isdigit_extended(void) {
    for (int i = 0; i <= UCHAR_MAX; i++) {
        TEST_ASSERT_EQUAL(isdigit(i) != 0, ft_isdigit(i) != 0);
    }
}
