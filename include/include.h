/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** include
*/

#ifndef INCLUDE_H_
    #define INCLUDE_H_

    #include "struct.h"

list_t *create_node(int data);
void print_list(list_t *list);
void delete_list(list_t *list);
list_t *add_node_to_end_of_list(list_t *list, list_t *node);
list_t *add_node_to_start_of_list(list_t *list, list_t *node);
list_t *delete_node(list_t *list, int data);

#endif /* !INCLUDE_H_ */
