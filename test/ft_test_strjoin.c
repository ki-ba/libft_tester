#include "unity.h"
#include "libft.h"
#include "test.h"

void test_ft_strjoin_basic(void) {
    char *result = ft_strjoin("Hello", "World");
    TEST_ASSERT_EQUAL_STRING("HelloWorld", result);
    free(result);
}

void test_ft_strjoin_empty_strings(void) {
    char *result = ft_strjoin("", "");
    TEST_ASSERT_EQUAL_STRING("", result);
    free(result);
}

void test_ft_strjoin_one_empty_string(void) {
    char *result = ft_strjoin("Hello", "");
    TEST_ASSERT_EQUAL_STRING("Hello", result);
    free(result);
}
