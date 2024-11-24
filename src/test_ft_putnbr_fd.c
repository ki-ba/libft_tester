/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:12:24 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:23:19 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_putnbr_fd_basic(void) {
    int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    ft_putnbr_fd(12345, fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[6] = {0};
    read(fd, buffer, 5);
    TEST_ASSERT_EQUAL_STRING("12345", buffer);
    close(fd);
    remove("test_output.txt");
}

void test_ft_putnbr_fd_negative(void) {
    int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    ft_putnbr_fd(-12345, fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[7] = {0};
    read(fd, buffer, 6);
    TEST_ASSERT_EQUAL_STRING("-12345", buffer);
    close(fd);
    remove("test_output.txt");
}

void test_ft_putnbr_fd_zero(void) {
    int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    ft_putnbr_fd(0, fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[2] = {0};
    read(fd, buffer, 1);
    TEST_ASSERT_EQUAL_STRING("0", buffer);
    close(fd);
    remove("test_output.txt");
}