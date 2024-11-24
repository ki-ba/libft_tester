#include "unity.h"
#include "libft.h"
#include "test.h"

void test_ft_isalpha_basic(void) {
    TEST_ASSERT_TRUE(ft_isalpha('a'));
    TEST_ASSERT_TRUE(ft_isalpha('Z'));
    TEST_ASSERT_FALSE(ft_isalpha('1'));
    TEST_ASSERT_FALSE(ft_isalpha(' '));
}

void test_ft_isalpha_extended(void) {
    for (int i = 'a'; i <= 'z'; i++) {
        TEST_ASSERT_TRUE(ft_isalpha(i));
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        TEST_ASSERT_TRUE(ft_isalpha(i));
    }
    TEST_ASSERT_FALSE(ft_isalpha('1'));
    TEST_ASSERT_FALSE(ft_isalpha('@'));
}
