/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:22 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:22:52 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_substr_basic(void) {
    char *result = ft_substr("Hello, World!", 7, 5);
    TEST_ASSERT_EQUAL_STRING("World", result);
    free(result);
}

void test_ft_substr_empty_string(void) {
    char *result = ft_substr("", 0, 5);
    TEST_ASSERT_EQUAL_STRING("", result);
    free(result);
}

void test_ft_substr_out_of_bounds(void) {
    char *result = ft_substr("Hello", 10, 5);
    TEST_ASSERT_EQUAL_STRING("", result);
    free(result);
}