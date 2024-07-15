#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers- prints numbers
 *@separator: points to a char
 *@n: holds a const int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*Variables*/
	va_list numbers;
	unsigned int i;
	/*Start iterating arguments*/
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		/*print number*/
		printf("%d", va_arg(numbers, int));
		/*check conditions*/
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		va_end(numbers);
	} /*end for*/
	printf("\n");
} /*end function*/
