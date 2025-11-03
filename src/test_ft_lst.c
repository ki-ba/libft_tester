/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:42:43 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:20:52 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void ft_lsttoupper_iter(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
}

static void* ft_lsttoupper_map(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    int i = 0;
    while (new_str[i])
    {
        new_str[i] = ft_toupper(new_str[i]);
        i++;
    }
    return new_str;
}

static void    del(void *content)
{
    free(content);
}

void test_ft_lst_add_back(void)
{
    t_list *list = ft_lstnew(strdup("Zero"));

    t_list **head = &list;
    
    ft_lstadd_back(head, ft_lstnew(strdup("First")));
    TEST_ASSERT_EQUAL_STRING("First", ft_lstlast(list)->content);

    ft_lstadd_back(head, ft_lstnew(strdup("Second")));
    TEST_ASSERT_EQUAL_STRING("Second", ft_lstlast(list)->content);

    ft_lstadd_back(head, ft_lstnew(strdup("Third")));
    TEST_ASSERT_EQUAL_STRING("Third", ft_lstlast(list)->content);
    TEST_ASSERT_EQUAL_INT(4, ft_lstsize(list));

    ft_lstclear(head, del);
    TEST_ASSERT_EQUAL_INT(0, ft_lstsize(list));

}

void    test_ft_lst_add_front(void)
{

    t_list *list = ft_lstnew(strdup("Zero"));
    t_list **head = &list;
    
    ft_lstadd_front(head, ft_lstnew(strdup("One")));
    TEST_ASSERT_EQUAL_STRING((char *)list->content, "One");

    ft_lstadd_front(head, ft_lstnew(strdup("Two")));
    TEST_ASSERT_EQUAL_STRING((char *)list->content, "Two");

    ft_lstadd_front(head, ft_lstnew(strdup("Three")));
    TEST_ASSERT_EQUAL_STRING(list->content, "Three");
    TEST_ASSERT_EQUAL_INT(ft_lstsize(list), 4);

    ft_lstclear(head, del);
    TEST_ASSERT_EQUAL_INT(0, ft_lstsize(list));

}

void    test_ft_lst_map(void)
{
    #define CONTENT_SHOULD_BE_DIFFERENT "Content of the new list should be different from the original list"
    #define LIST_SHOULD_BE_DIFFERENT "Nodes of the new list should be different from the original list"

    t_list *list = ft_lstnew(strdup("hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("world")));
    ft_lstadd_back(&list, ft_lstnew(strdup("42")));
    
    t_list *upper_list = ft_lstmap(list, ft_lsttoupper_map, del);
    TEST_ASSERT_EQUAL_STRING("HELLO", (char *)upper_list->content);
    TEST_ASSERT_EQUAL_STRING("WORLD", (char *)upper_list->next->content);
    TEST_ASSERT_EQUAL_STRING("42", (char *)upper_list->next->next->content);

    TEST_ASSERT_NOT_EQUAL_MESSAGE(list, upper_list, LIST_SHOULD_BE_DIFFERENT);
    TEST_ASSERT_NOT_EQUAL_MESSAGE(list->next, upper_list->next, LIST_SHOULD_BE_DIFFERENT);
    TEST_ASSERT_NOT_EQUAL_MESSAGE(list->next->next, upper_list->next->next, LIST_SHOULD_BE_DIFFERENT);

    TEST_ASSERT_NOT_EQUAL_MESSAGE(list->content, upper_list->content, CONTENT_SHOULD_BE_DIFFERENT);
    TEST_ASSERT_NOT_EQUAL_MESSAGE(list->next->content, upper_list->next->content, CONTENT_SHOULD_BE_DIFFERENT);
    TEST_ASSERT_NOT_EQUAL_MESSAGE(list->next->next->content, upper_list->next->next->content, CONTENT_SHOULD_BE_DIFFERENT);

    ft_lstclear(&list, del);
    ft_lstclear(&upper_list, del);
}

void    test_ft_lstiter(void)
{
    #define LIST_SHOULD_KEEP_SAME_ADDRESS "The list nodes should keep the same addresses after iteration"

    t_list *list = ft_lstnew(strdup("Hello"));
    t_list *list_address = list;

    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    ft_lstadd_back(&list, ft_lstnew(strdup("42")));

    ft_lstiter(list, ft_lsttoupper_iter);
    TEST_ASSERT_EQUAL_STRING("HELLO", (char *)list->content);
    TEST_ASSERT_EQUAL_STRING("WORLD", (char *)list->next->content);
    TEST_ASSERT_EQUAL_STRING("42", (char *)list->next->next->content);

    TEST_ASSERT_EQUAL_PTR_MESSAGE(list, list_address, LIST_SHOULD_KEEP_SAME_ADDRESS);
    TEST_ASSERT_EQUAL_PTR_MESSAGE(list->next, list_address->next, LIST_SHOULD_KEEP_SAME_ADDRESS);
    TEST_ASSERT_EQUAL_PTR_MESSAGE(list->next->next, list_address->next->next, LIST_SHOULD_KEEP_SAME_ADDRESS);

    ft_lstclear(&list, del);
}
