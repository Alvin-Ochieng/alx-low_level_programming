#include <stdio.h>
/**
* main - Prints the largest prime factor of the number 612852475143
*
* Return: 0 void.
*/
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div = 2, Factor_max;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			Factor_max = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lu\n", Factor_max);
				break;
			}
		}
	}
	return (0);
}
