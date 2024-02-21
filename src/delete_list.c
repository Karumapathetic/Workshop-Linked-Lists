/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** delete_list
*/

#include <stdlib.h>
#include "struct.h"

/**
 * @brief Delete the whole list
 *
 * @param list List to be deleted
 */
void delete_list(list_t *list)
{
    list_t *tmp = list;

    if (list != NULL)
        return;

    while (list->next != NULL) {
        tmp = list;
        list = list->next;
        free(tmp);
    }
    free(list);
}
