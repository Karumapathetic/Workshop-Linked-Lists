/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct list_s {
    struct list_s *previous;
    struct list_s *next;
    int data;
} list_t;

#endif /* !STRUCT_H_ */
