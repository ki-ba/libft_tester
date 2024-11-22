#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

void test_ft_strdup_basic(void) {
    char *s = "Hello, world!";
    char *dup = ft_strdup(s);
    TEST_ASSERT_EQUAL_STRING(s, dup);
    free((char *)dup);
}

void test_ft_strdup_empty_string(void) {
    char *s = "";
    char *dup = ft_strdup(s);
    TEST_ASSERT_EQUAL_STRING(s, dup);
    free((char *)dup);
}
