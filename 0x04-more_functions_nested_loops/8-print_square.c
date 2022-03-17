#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square
 * if size is 0 or less, the function should print only a new line
 * use the character # to print the square.
 * Return:void
 */

void print_square(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
