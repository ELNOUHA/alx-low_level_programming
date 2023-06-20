#include "main.h"

/**
 * print_alphabet - the alphabet a - z
 *            and utilizes on the _putchar function to print
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
