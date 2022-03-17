#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square
 * if size is 0 or less, the function should print only a new line
 * use the character # to print the square.
 */
void print_square(int size);
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;
		
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
