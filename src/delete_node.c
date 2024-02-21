/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** delete_node
*/

#include <stdlib.h>
#include "struct.h"

/**
 * @brief Delete a node with its data as index
 *
 * @param list List containing the node
 * @param data Data to find the node
 * @return list_t* Return the list without the node
 */
list_t *delete_node(list_t *list, int data)
{
    list_t *tmp = list;
    list_t *prev = NULL;
    list_t *next = NULL;

    if (list == NULL)
        return NULL;
    while (tmp != NULL) {
        if (tmp->data == data) {
            next = tmp->next;
            free(tmp);
            prev->next = next;
            return list;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    printf("Data pas trouvée\n");
    return list;
}
