/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:59 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/05 11:42:27 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strrchr_basic(void) {
    const char *s = "Hello, world!";
    TEST_ASSERT_EQUAL_PTR(strrchr(s, 'o'), ft_strrchr(s, 'o'));

    TEST_ASSERT_EQUAL_PTR(strrchr(s, 'H'), ft_strrchr(s, 'H'));
    TEST_ASSERT_EQUAL_PTR(strrchr(s, 'd'), ft_strrchr(s, 'd'));
    TEST_ASSERT_EQUAL_PTR(strrchr(s, 'x'), ft_strrchr(s, 'x'));
}

void test_ft_strrchr_empty_string(void) {
    const char *s = "";
    TEST_ASSERT_NULL(ft_strrchr(s, 'a'));
}

void test_ft_strrchr_null(void)
{
    struct { const char *s; int c; char *(*f)(const char *, int); } ctx1 = {NULL, 0, ft_strrchr};
    struct { const char *s; int c; char *(*f)(const char *, int); } ctx2 = {NULL, 0, strrchr};
    test_signal_equivalence(adapter_strchr, &ctx1, adapter_strchr, &ctx2);
}
