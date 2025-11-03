/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:09:37 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:09:37 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strdup_basic(void) {
    char *s = "Hello, world!";
    char *dup = ft_strdup(s);
    TEST_ASSERT_EQUAL_STRING(s, dup);
    free(dup);
}

void test_ft_strdup_empty_string(void) {
    char *s = "";
    char *dup = ft_strdup(s);
    TEST_ASSERT_EQUAL_STRING(s, dup);
    free(dup);
}
