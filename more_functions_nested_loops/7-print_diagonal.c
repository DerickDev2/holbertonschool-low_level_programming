#include "main.h"

/**
 * print_diagonal - prints a diagonal line using the '\' character
 * @n: number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	/* slash and space variable */
	int sl, sp;

	if (n > 0)
	{
		for (sp = 0; sp < n; sp++)
		{
			for (sl = 0; sl < sp; sl++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
