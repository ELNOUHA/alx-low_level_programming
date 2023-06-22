#include "main.h"

/**
 * print_diagonal -  print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int q, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (q = 1; q <= n; q++)
		{
			for (space = 1; space <= q; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
