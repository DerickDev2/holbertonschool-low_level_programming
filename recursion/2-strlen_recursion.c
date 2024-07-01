#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s:char arg
 * Return: int.
 */
int _strlen_recursion(char *s);
{
	if (*s)
	{
		return (1 + _strlen_recursions(s + 1));
	}
	else
		return (0);
}
