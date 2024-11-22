#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

void test_ft_strchr_basic(void) {
    const char *s = "Hello, world!";
    TEST_ASSERT_EQUAL_STRING(strchr(s, 'o'), ft_strchr(s, 'o'));
    TEST_ASSERT_EQUAL_STRING(strchr(s, 'H'), ft_strchr(s, 'H'));
    TEST_ASSERT_EQUAL_STRING(strchr(s, 'd'), ft_strchr(s, 'd'));
    TEST_ASSERT_NULL(ft_strchr(s, 'x'));
}

void test_ft_strchr_empty_string(void) {
    const char *s = "";
    TEST_ASSERT_NULL(ft_strchr(s, 'a'));
}