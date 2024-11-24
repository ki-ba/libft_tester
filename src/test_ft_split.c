#include "unity.h"
#include "libft.h"
#include <stdlib.h>

extern char **ft_split(char const *s, char c);

void test_ft_split_basic(void) {
    char **result = ft_split("hello world", ' ');
    TEST_ASSERT_EQUAL_STRING("hello", result[0]);
    TEST_ASSERT_EQUAL_STRING("world", result[1]);
    TEST_ASSERT_NULL(result[2]);

    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}
void test_ft_split_empty_string(void) {
    char **result = ft_split("", ' ');
    TEST_ASSERT_NULL(result[0]);
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}

void test_ft_split_no_delimiters(void) {
    char **result = ft_split("helloworld", ' ');
    TEST_ASSERT_EQUAL_STRING("helloworld", result[0]);
    TEST_ASSERT_NULL(result[1]);
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}

void test_ft_split_only_delimiters(void) {
    char **result = ft_split("     ", ' ');
    TEST_ASSERT_NULL(result[0]);
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}

void test_ft_split_multiple_delimiters(void) {
    char **result = ft_split("hello  world", ' ');
    TEST_ASSERT_EQUAL_STRING("hello", result[0]);
    TEST_ASSERT_EQUAL_STRING("world", result[1]);
    TEST_ASSERT_NULL(result[2]);
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}
