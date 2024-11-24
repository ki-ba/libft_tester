/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:09:14 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:09:14 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strjoin_basic(void) {
    char *result = ft_strjoin("Hello", "World");
    TEST_ASSERT_EQUAL_STRING("HelloWorld", result);
    free(result);
}

void test_ft_strjoin_empty_strings(void) {
    char *result = ft_strjoin("", "");
    TEST_ASSERT_EQUAL_STRING("", result);
    free(result);
}

void test_ft_strjoin_one_empty_string(void) {
    char *result = ft_strjoin("Hello", "");
    TEST_ASSERT_EQUAL_STRING("Hello", result);
    free(result);
}
