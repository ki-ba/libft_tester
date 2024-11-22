#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

void test_ft_strrchr_basic(void) {
    const char *s = "Hello, world!";
    TEST_ASSERT_EQUAL_STRING(strrchr(s, 'o'), ft_strrchr(s, 'o'));
    TEST_ASSERT_EQUAL_STRING(strrchr(s, 'H'), ft_strrchr(s, 'H'));
    TEST_ASSERT_EQUAL_STRING(strrchr(s, 'd'), ft_strrchr(s, 'd'));
    TEST_ASSERT_NULL(ft_strrchr(s, 'x'));
}

void test_ft_strrchr_empty_string(void) {
    const char *s = "";
    TEST_ASSERT_NULL(ft_strrchr(s, 'a'));
}
