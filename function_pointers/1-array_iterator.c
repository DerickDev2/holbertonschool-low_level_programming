#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * array_iterator - execute a funtion for each array
 * @array: points to an array of ints
 * @size: holds a size
 * @action: points to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*Variables*/
	size_t i;
	/*execute function pass as a param on each array mem*/
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}


