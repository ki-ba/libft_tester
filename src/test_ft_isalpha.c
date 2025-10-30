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
    for (int i = 0; i < 256; i++) {
        if (!((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))) {
            TEST_ASSERT_FALSE(ft_isalpha(i));
        }
    }
}
