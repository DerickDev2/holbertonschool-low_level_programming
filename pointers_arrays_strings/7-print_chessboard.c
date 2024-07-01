#include "main.h"

/**
<<<<<<< HEAD
 * print_chessboard - print the chessboard
 * @a: pointer to 2D array
 *
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; ++row)
	{
		for (col = 0; col < 8; ++col)
			_putchar(a[row][col]);
		_putchar('\n');
	}
=======
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
>>>>>>> 8eee7910d783129663e524bda80c203095b085e0
}
