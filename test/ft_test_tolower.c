#include "unity.h"
#include "libft.h"
#include "test.h"

void test_ft_tolower_basic(void) {
    TEST_ASSERT_EQUAL_INT('a', ft_tolower('A'));
    TEST_ASSERT_EQUAL_INT('z', ft_tolower('Z'));
    TEST_ASSERT_EQUAL_INT('a', ft_tolower('a'));
    TEST_ASSERT_EQUAL_INT('z', ft_tolower('z'));
    TEST_ASSERT_EQUAL_INT('1', ft_tolower('1'));
    TEST_ASSERT_EQUAL_INT(' ', ft_tolower(' '));
}

void test_ft_tolower_extended(void) {
    for (int i = 'A'; i <= 'Z'; i++) {
        TEST_ASSERT_EQUAL_INT(i + 32, ft_tolower(i));
    }
    for (int i = 'a'; i <= 'z'; i++) {
        TEST_ASSERT_EQUAL_INT(i, ft_tolower(i));
    }
}
