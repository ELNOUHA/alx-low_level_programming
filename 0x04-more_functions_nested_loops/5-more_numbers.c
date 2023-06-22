#include "main.h"

/**
 * more_numbers - point 0 - 14 ten times and you
 *              can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, row, num;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
