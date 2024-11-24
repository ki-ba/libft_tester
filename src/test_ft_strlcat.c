#include "unity.h"
#include "libft.h"
#include "test.h"

void test_ft_strlcat_basic(void) {
    char dest[15] = "Hello";
    char dest2[15] = "Hello";
    const char *src = " World";
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    size_t result2 = strlcat(dest2, src, sizeof(dest2));
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcat_truncate(void) {
    char dest[10] = "Hello";
    char dest2[10] = "Hello";
    const char *src = " World";
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    size_t result2 = strlcat(dest2, src, sizeof(dest2));
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcat_zero_length(void) {
    char dest[10] = "Hello";
    char dest2[10] = "Hello";
    const char *src = " World";
    size_t result = ft_strlcat(dest, src, 0);
    size_t result2 = strlcat(dest2, src, 0);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}
