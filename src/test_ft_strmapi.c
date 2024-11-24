/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:09:11 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:09:12 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char my_func(unsigned int i, char c) {
    return c + i;
}

void test_ft_strmapi_basic(void) {
    char *result = ft_strmapi("abc", my_func);
    TEST_ASSERT_EQUAL_STRING("ace", result);
    free(result);
}

void test_ft_strmapi_empty_string(void) {
    char *result = ft_strmapi("", my_func);
    TEST_ASSERT_EQUAL_STRING("", result);
    free(result);
}
