#include "unity.h"
#include "libft.h"
#include "test.h"
#include <ctype.h>
#include <limits.h>

void test_ft_isprint(void) {
    for (int i = 0; i <= UCHAR_MAX; i++)
        TEST_ASSERT_EQUAL(ft_isprint(i) != 0, isprint(i) != 0);
}
