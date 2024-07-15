#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all- sums all the args of a varfunc
 *@n: holds a const int value
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	/*Variables*/
	unsigned int i;
	int sum = 0;
	va_list numList;
	/*Verify what n holds*/
	if (n == 0)
		return (0);
	/*start iterating argument*/
	va_start(numList, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numList, int);
	/*mark the end of varlis*/
	va_end(numList);
	return (sum);
} /*end function*/
