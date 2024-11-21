#include "unity.h"
#include "../libft.h"
#include <stdlib.h>

void test_ft_calloc_basic(void) {
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(0, arr[i]);
    }
    free(arr);
}

void test_ft_calloc_zero_elements(void) {
    int *arr = (int *)ft_calloc(0, sizeof(int));
    TEST_ASSERT_NOT_NULL(arr);
    free(arr);
}

void test_ft_calloc_zero_size(void) {
    int *arr = (int *)ft_calloc(5, 0);
    TEST_ASSERT_NOT_NULL(arr);
    free(arr);
}
