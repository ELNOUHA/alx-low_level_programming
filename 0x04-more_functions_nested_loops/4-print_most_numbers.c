#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 apart
 *                 from 2 and 4 and you can
 *                 only using _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if ((num == 2) || (num == 4))
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
