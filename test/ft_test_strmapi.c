#include "unity.h"
#include "libft.h"
#include "test.h"

char my_func(unsigned int i, char c) {
    return c + i;
}

void test_ft_strmapi_basic(void) {
    char *result = ft_strmapi("abc", my_func);
    TEST_ASSERT_EQUAL_STRING("ace", result);
    free(result);
}

void test_ft_strmapi_empty_string(void) {
    char *result = ft_strmapi("", my_func);
    TEST_ASSERT_EQUAL_STRING("", result);
    free(result);
}
