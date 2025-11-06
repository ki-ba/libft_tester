#include "unity.h"
#include "test.h"

extern char *ft_strnstr(const char *big, const char *little, size_t len);

void test_ft_strnstr_found(void)
{
    char *big = "Hello, world!";
    char *little = "world";
    TEST_ASSERT_EQUAL_STRING("world!", ft_strnstr(big, little, 13));
}

void test_ft_strnstr_not_found(void)
{
    char *big = "Hello, world!";
    char *little = "42";
    TEST_ASSERT_NULL(ft_strnstr(big, little, 13));
}

void test_ft_strnstr_little_longer_than_big(void)
{
    char *big = "abc";
    char *little = "abcdef";
    TEST_ASSERT_NULL(ft_strnstr(big, little, 3));
}

void test_ft_strnstr_partial_match(void)
{
    char *big = "Hello, world!";
    char *little = "wor";
    TEST_ASSERT_EQUAL_STRING("world!", ft_strnstr(big, little, 13));
}

void test_ft_strnstr_len_less_than_big(void)
{
    char *big = "Hello, world!";
    char *little = "world";
    TEST_ASSERT_NULL(ft_strnstr(big, little, 5));
}
void test_ft_strnstr_empty_big(void)
{
    char *big = "";
    char *little = "world";
    TEST_ASSERT_NULL(ft_strnstr(big, little, 13));
}

void test_ft_strnstr_empty_little(void)
{
    char *big = "Hello, world!";
    char *little = "";
    TEST_ASSERT_EQUAL_STRING(big, ft_strnstr(big, little, 13));
}

void test_ft_strnstr_null(void)
{
    struct { const char *big; const char *little; size_t len; char *(*f)(const char *, const char *, size_t); } ctx1 = {NULL, "world", 13, ft_strnstr};
    struct { const char *big; const char *little; size_t len; char *(*f)(const char *, const char *, size_t); } ctx2 = {NULL, "world", 13, strnstr};
    test_signal_equivalence(adapter_strncmp, &ctx1, adapter_strncmp, &ctx2);
}
