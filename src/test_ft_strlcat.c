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

void test_ft_strlcat_s1_null(void)
{
    struct { char *dest; const char *src; size_t size; size_t (*f)(char *, const char *, size_t); } ctx1 = {NULL, " World", 10, ft_strlcat};
    struct { char *dest; const char *src; size_t size; size_t (*f)(char *, const char *, size_t); } ctx2 = {NULL, " World", 10, strlcat};
    test_signal_equivalence(adapter_strncmp, &ctx1, adapter_strncmp, &ctx2);
}

void test_ft_strlcat_s2_null(void)
{
    char dest1[10] = "Hello";
    char dest2[10] = "Hello";
    struct { char *dest; const char *src; size_t size; size_t (*f)(char *, const char *, size_t); } ctx1 = {dest1, NULL, 10, ft_strlcat};
    struct { char *dest; const char *src; size_t size; size_t (*f)(char *, const char *, size_t); } ctx2 = {dest2, NULL, 10, strlcat};
    test_signal_equivalence(adapter_strlen, &ctx1, adapter_strlen, &ctx2);
}
