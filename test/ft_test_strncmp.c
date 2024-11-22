#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

#define TEST_ASSERT_SAME_SIGN(a, b) \
    TEST_ASSERT_TRUE(((a) > 0 && (b) > 0) || ((a) < 0 && (b) < 0) || ((a) == 0 && (b) == 0))

void test_ft_strncmp_basic(void) {
    TEST_ASSERT_SAME_SIGN(strncmp("Hello", "Hello", 5), ft_strncmp("Hello", "Hello", 5));
    TEST_ASSERT_SAME_SIGN(strncmp("Hello", "World", 5), ft_strncmp("Hello", "World", 5));
    TEST_ASSERT_SAME_SIGN(strncmp("World", "Hello", 5), ft_strncmp("World", "Hello", 5));
}

void test_ft_strncmp_empty_strings(void) {
    TEST_ASSERT_SAME_SIGN(strncmp("", "", 1), ft_strncmp("", "", 1));
    TEST_ASSERT_SAME_SIGN(strncmp("Hello", "", 5), ft_strncmp("Hello", "", 5));
    TEST_ASSERT_SAME_SIGN(strncmp("", "Hello", 5), ft_strncmp("", "Hello", 5));
}
