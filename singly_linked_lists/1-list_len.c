#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints all the nodes of a linked list
 * @h: points to the link struct
 * @Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	/*Variable*/
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
