#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 **add_node - adds a new node to start of a list
 *@head: a pointo to a pointer
 *@str: points to a contant char
 *Return: address of the new element of null
 */
list_t *add_node(list_t **head, const char *str)
{
	/*Variables*/
	list_t *new_head = (list_t *)malloc(sizeof(list_t));
	/*chekc str if empty*/
	if (str == NULL || new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	/*check for success*/
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	return (new_head);
} /*end function*/
