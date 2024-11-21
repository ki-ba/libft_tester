#include "unity.h"
#include "../libft.h"

void test_ft_isprint_basic(void) {
    TEST_ASSERT_TRUE(ft_isprint('A'));
    TEST_ASSERT_TRUE(ft_isprint(' '));
    TEST_ASSERT_FALSE(ft_isprint('\n'));
    TEST_ASSERT_FALSE(ft_isprint(127));
}

void test_ft_isprint_extended(void) {
    for (int i = 32; i < 127; i++) {
        TEST_ASSERT_TRUE(ft_isprint(i));
    }
    TEST_ASSERT_FALSE(ft_isprint(31));
    TEST_ASSERT_FALSE(ft_isprint(128));
}
