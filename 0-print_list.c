#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - prints all the nodes of a linked list
 *@h: points to the link struct
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	/*Variables*/
	size_t count = 0;

	while (h != NULL) /*Check if str !NULL*/
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			count++; /*print count*/
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
		} /*end if else*/
		h = h->next; /*Move to next argument*/
	} /*end while*/
	return (count);
} /*end function*/
