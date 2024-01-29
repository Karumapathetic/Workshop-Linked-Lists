/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "include.h"

/**
 * File : create_node.c
 *
 * Create a new node
 * Print the created node
 *
 * Output :
 * Node : 1, Data : 1
 */
void ex01(void)
{
    list_t *node = create_node(1);

    print_list(node);
    free(node);
}

/**
 * File : delete_list.c
 *
 * Create a list
 * Delete the created list with your own function
 *
 * Valgrind must be clean
 */
void ex02(void)
{
    list_t *list = create_node(1);

    list->next = create_node(2);
    delete_list(list);
}

/**
 * File : add_node_to_end_of_list.c and add_node_to_start_of_list.c
 *
 * Create a list
 * Add a new node at the end of the list
 * Add a new node at the start of the list
 *
 * Print the list
 * Delete the list
 *
 * Output :
 * Node : 1, Data 3
 * Node : 2, Data 1
 * Node : 3, Data 2
 *
 * Valgrind must be clean
 */
void ex03(void)
{
    list_t *list = create_node(1);
    list_t *first_node = create_node(2);
    list_t *second_node = create_node(3);

    list = add_node_to_end_of_list(list, first_node);
    list = add_node_to_start_of_list(list, second_node);
    print_list(list);
    delete_list(list);
}

/**
 * File : delete_node.c
 *
 * Create a list
 * Add a new node at the end of the list
 * Add a new node at the start of the list
 *
 * Delete a node
 * Print the list
 *
 * Output :
 * Node : 1, Data 3
 * Node : 3, Data 2
 *
 * Valgrind must be clean
 */
void ex04(void)
{
    list_t *list = create_node(1);
    list_t *first_node = create_node(2);
    list_t *second_node = create_node(3);

    list = add_node_to_end_of_list(list, first_node);
    list = add_node_to_start_of_list(list, second_node);
    delete_node(list, 1);
    print_list(list);
    delete_list(list);
}

int main(void)
{
    printf("Exercise 1 : \n");
    ex01();
    printf("\nExercise 2 : \n");
    ex02();
    printf("\nExercise 3 : \n");
    ex03();
    printf("\nExercise 4 : \n");
    ex04();
    return 0;
}
