#include "unity.h"
#include "libft.h"
#include "test.h"
#include <limits.h>
#include <ctype.h>

void test_ft_isalpha(void) {
    for (int i = 0; i <= UCHAR_MAX; i++) {
        TEST_ASSERT_EQUAL(isalpha(i) != 0, ft_isalpha(i) != 0);
    }
}
