/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:42:43 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:02:22 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unity.h"

void ft_lsttoupper(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
}

void ft_lsttolower(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = ft_tolower(*str);
        str++;
    }
}

void    del(void *content)
{
    content = NULL;
}

static void ft_print_lst(t_list *head)
{
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}

void test_ft_lst_add_back(void)
{
    t_list *list = ft_lstnew("Zero");

    t_list **head = &list;
    
    ft_lstadd_back(head, ft_lstnew("First"));
    TEST_ASSERT_EQUAL_STRING("First", ft_lstlast(list)->content);

    ft_lstadd_back(head, ft_lstnew("Second"));
    TEST_ASSERT_EQUAL_STRING("Second", ft_lstlast(list)->content);

    ft_lstadd_back(head, ft_lstnew("Third"));
    TEST_ASSERT_EQUAL_STRING("Third", ft_lstlast(list)->content);
    TEST_ASSERT_EQUAL_INT(4, ft_lstsize(list));

    ft_lstclear(head, del);
    TEST_ASSERT_EQUAL_INT(0, ft_lstsize(list));

}

void    test_ft_lst_add_front(void)
{

    t_list *list = ft_lstnew("Zero");
    t_list **head = &list;
    
    ft_lstadd_front(head, ft_lstnew("One"));
    TEST_ASSERT_EQUAL_STRING((char *)list->content, "One");

    ft_lstadd_front(head, ft_lstnew("Two"));
    TEST_ASSERT_EQUAL_STRING((char *)list->content, "Two");

    ft_lstadd_front(head, ft_lstnew("Three"));
    TEST_ASSERT_EQUAL_STRING(list->content, "Three");
    TEST_ASSERT_EQUAL_INT(ft_lstsize(list), 4);

    ft_lstclear(head, del);
    TEST_ASSERT_EQUAL_INT(0, ft_lstsize(list));

}

