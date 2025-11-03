/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:22:42 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:22:45 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_memmove_basic(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";

    ft_memmove(dest + 7, dest, 5);
    memmove(dest2 + 7, dest2, 5);

    TEST_ASSERT_EQUAL_MEMORY(dest2, dest, 50);
}

void test_ft_memmove_overlap(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";

    ft_memmove(dest + 7, dest, 7);
    memmove(dest2 + 7, dest2, 7);

    TEST_ASSERT_EQUAL_MEMORY(dest2, dest, 50);
}

void test_ft_memmove_no_overlap(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";
    char src[50] = "Goodbye!";

    ft_memmove(dest, src, 8);
    memmove(dest2, src, 8);

    TEST_ASSERT_EQUAL_MEMORY(dest2, dest, 50);
}

void test_ft_memmove_zero_length(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";
    char src[50] = "Goodbye!";

    ft_memmove(dest, src, 0);
    memmove(dest2, src, 0);

    TEST_ASSERT_EQUAL_MEMORY(dest2, dest, 50);
}

void test_ft_memmove_random_data(void) {
    unsigned char dest[50];
    unsigned char dest2[50];

    int source_fd = open("/dev/urandom", O_RDONLY);
    unsigned char source[50];

    if (read(source_fd, source, 50) < 0)
        TEST_IGNORE_MESSAGE("Failed to read from /dev/urandom");
    close(source_fd);

    ft_memmove(dest, &source, sizeof(source));
    memmove(dest2, &source, sizeof(source));

    TEST_ASSERT_EQUAL_MEMORY(dest2, dest, 50);
}
