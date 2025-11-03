/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:55 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:07:56 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <limits.h>
#include <ctype.h>

void test_ft_tolower(void) {
    for (int i = 0; i <= UCHAR_MAX; i++) {
        TEST_ASSERT_EQUAL(tolower(i) != 0, ft_tolower(i) != 0);
    }
}
