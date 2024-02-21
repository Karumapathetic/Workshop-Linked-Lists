/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** create_node
*/

#include <stdlib.h>
#include "struct.h"

/**
 * @brief Create a node object
 *
 * @param data Data needed in the node created
 * @return list_t* Return the list created
 */
list_t *create_node(int data)
{
    list_t *node = malloc(sizeof(list_t));

    node->data = data;
    node->next = NULL;
    return node;
}
