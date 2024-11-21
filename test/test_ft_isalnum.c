#include "unity.h"
#include "../libft.h"

void test_ft_isalnum_basic(void) {
    TEST_ASSERT_TRUE(ft_isalnum('a'));
    TEST_ASSERT_TRUE(ft_isalnum('Z'));
    TEST_ASSERT_TRUE(ft_isalnum('5'));
    TEST_ASSERT_FALSE(ft_isalnum(' '));
    TEST_ASSERT_FALSE(ft_isalnum('@'));
}

void test_ft_isalnum_extended(void) {
    for (int i = 'a'; i <= 'z'; i++) {
        TEST_ASSERT_TRUE(ft_isalnum(i));
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        TEST_ASSERT_TRUE(ft_isalnum(i));
    }
    for (int i = '0'; i <= '9'; i++) {
        TEST_ASSERT_TRUE(ft_isalnum(i));
    }
    TEST_ASSERT_FALSE(ft_isalnum(' '));
    TEST_ASSERT_FALSE(ft_isalnum('@'));
}
