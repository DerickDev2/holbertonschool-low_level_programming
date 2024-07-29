#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/* Function to calculate the length of a string */
size_t my_strlen(const char *str) {
    size_t length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

/**
 * add_node - adds a new node to start of a list
 * @head: a pointer to a pointer
 * @str: points to a constant char
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str) {
    /* Variables */
    list_t *new_head = (list_t *)malloc(sizeof(list_t));

    /* Check str if empty */
    if (str == NULL || new_head == NULL)
        return (NULL);

    new_head->str = strdup(str);
    new_head->len = my_strlen(str);
    new_head->next = *head;
    *head = new_head;

    /* Check for success */
    if (new_head->str == NULL) {
        free(new_head);
        return (NULL);
    }
    return (new_head);
}

