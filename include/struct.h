/*
** EPITECH PROJECT, 2024
** Workshop-LinkedLists
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct list_s {
    struct list_s *next;
    int data;
} list_t;

// typedef struct listp_s {
//     struct listp_s *previous;
//     struct listp_s *next;
//     int data;
// } listp_t;

#endif /* !STRUCT_H_ */
