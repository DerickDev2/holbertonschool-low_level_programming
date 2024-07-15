#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings- prints the list of string
 *@separator: points to a char
 *@n: holds a const int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*Variables*/
	va_list strings;
	unsigned int i;
	char *string2;
	/*start argument search*/
	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		/*print number*/
		string2 = va_arg(strings, char*);
		if (string2 == NULL)
			printf("(nil)");
		else
		printf("%s", string2);
		/*check conditions*/
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		va_end(strings);
	} /*end for*/
	printf("\n");
} /*end fucntion*/
