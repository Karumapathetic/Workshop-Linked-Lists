/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** add_node_to_start_of_list
*/

#include <stdlib.h>
#include "struct.h"

/**
 * @brief Add a given node at the start of the list
 *
 * @param list List to insert the node
 * @param node Node to be inserted
 * @return list_t* Return the list with the node
 */
list_t *add_node_to_start_of_list(list_t *list, list_t *node)
{
    if (list == NULL)
        return node;
    if (node == NULL)
        return list;
    node->next = list;
    return node;
}
