
#include "main.h"

/**
 * print_diagonal -  print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int k, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 1; k <= n; k++)
		{
			for (space = 1; space <= k; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
