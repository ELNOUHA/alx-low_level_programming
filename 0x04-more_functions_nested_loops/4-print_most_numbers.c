#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *                 do not print 2 and 4
 *                 only using _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; i++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n')
}
