#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * int_index - returns a pointer to the index
 * @array: pionts to a char array
 * @size: holds an int value
 * @cmp: points to a function
 * Return: index or 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
