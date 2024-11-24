/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:35 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:07:36 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strchr_basic(void) {
    const char *s = "Hello, world!";
    TEST_ASSERT_EQUAL_STRING(strchr(s, 'o'), ft_strchr(s, 'o'));
    TEST_ASSERT_EQUAL_STRING(strchr(s, 'H'), ft_strchr(s, 'H'));
    TEST_ASSERT_EQUAL_STRING(strchr(s, 'd'), ft_strchr(s, 'd'));
    TEST_ASSERT_NULL(ft_strchr(s, 'x'));
}

void test_ft_strchr_empty_string(void) {
    const char *s = "";
    TEST_ASSERT_NULL(ft_strchr(s, 'a'));
}
