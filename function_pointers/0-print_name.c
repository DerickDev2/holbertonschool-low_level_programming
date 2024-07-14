#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name- print a name using a function pointer
 * @name: points to a char location
 * @f: point to a function address
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
