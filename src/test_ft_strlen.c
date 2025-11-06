/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:46 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/05 11:40:09 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>

void test_ft_strlen_basic(void) {
    TEST_ASSERT_EQUAL_INT(strlen("Hello"), ft_strlen("Hello"));
}

void test_ft_strlen_empty_string(void) {
    TEST_ASSERT_EQUAL_INT(strlen(""), ft_strlen(""));
}

void test_ft_strlen_long_string(void) {
    const char *long_str = "Sans rigoler.\nJe pratique la MMA depuis maintenant 6 ans, de la boxe en parallèle depuis 7 ans, je pourrai.\nAinsi que la musculation depuis 4 ans, 1m87 pour 86 kg.\nJ'ai une vitesse de fou, et des réflexes identiques à ma vitesse. J'ai juste à l'attendre qu'il me charge, l'esquiver et lui donner des bonnes patates dans la tête. Je le lâcherai pas à la moindre erreur, le gorille est fini. T'auras toujours des puceaux d'ici pour penser que c'est impossible. Rien n'est impossible avec de la volonté déjà les amis, et de 2) c'est pas avec votre corps de lâche que vous allez faire quoi que ce soit. N'importe quel homme un minimum entraîné peut vaincre un gorille avec un couteau déjà. À main nue c'est pas forcément plus compliqué ça demande juste de la technique.";
    TEST_ASSERT_EQUAL_INT(strlen(long_str), ft_strlen(long_str));
}

void test_ft_strlen_null(void)
{
    struct {const char *s; size_t(*f)(const char *);} ctx1 = {NULL, ft_strlen};
    struct {const char *s; size_t(*f)(const char *);} ctx2 = {NULL, strlen};
    test_signal_equivalence(adapter_strlen, &ctx1, adapter_strlen, &ctx2);
}
