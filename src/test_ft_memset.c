#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

extern void *ft_memset(void *b, int c, size_t len);

void test_ft_memset_basic(void) {
    char str[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    ft_memset(str, 'A', 5);
    memset(str2, 'A', 5);
    TEST_ASSERT_EQUAL_STRING(str2, str);
}

void test_ft_memset_zero_length(void) {
    char str[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    ft_memset(str, 'A', (0));
    memset(str2, 'A', (0));
    TEST_ASSERT_EQUAL_STRING(str2, str);
}

void test_ft_memset_full_length(void) {
    char str[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    ft_memset(str, 'B', 13);
    memset(str2, 'B', 13);
    TEST_ASSERT_EQUAL_STRING(str2, str);
}

void test_ft_memset_partial_length(void) {
    char str[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    ft_memset(str + 7, 'C', 5);
    memset(str2 + 7, 'C', 5);
    TEST_ASSERT_EQUAL_STRING(str2, str);
}
