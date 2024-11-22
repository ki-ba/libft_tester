#include "unity.h"
#include "libft.h"
#include <bsd/string.h>
#include "test.h"

void test_ft_strlcpy_basic(void) {
    char dest[10];
    char dest2[10];
    const char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    size_t result2 = strlcpy(dest2, src, sizeof(dest2));
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcpy_truncate(void) {
    char dest[5];
    char dest2[5];
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    size_t result2 = strlcpy(dest2, src, sizeof(dest2));
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcpy_zero_length(void) {
    char dest[10] = "Initial";
    char dest2[10] = "Initial";
    const char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, 0);
    size_t result2 = strlcpy(dest2, src, 0);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}
