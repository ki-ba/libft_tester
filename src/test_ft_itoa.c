/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:22:21 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:22:23 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_itoa_basic(void) {
    char *result = ft_itoa(12345);
    TEST_ASSERT_EQUAL_STRING("12345", result);
    free(result);
}

void test_ft_itoa_negative(void) {
    char *result = ft_itoa(-12345);
    TEST_ASSERT_EQUAL_STRING("-12345", result);
    free(result);
}

void test_ft_itoa_zero(void) {
    char *result = ft_itoa(0);
    TEST_ASSERT_EQUAL_STRING("0", result);
    free(result);
}