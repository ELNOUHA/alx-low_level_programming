#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII reprsentation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
