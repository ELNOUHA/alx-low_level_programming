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

	for (num = 48; num <= 58; i++)
	{
		if ((num == 50) || (num == 52))
		{
			continue;
		}
		_putchar(num + 48);
	}
	_putchar('\n');
}
