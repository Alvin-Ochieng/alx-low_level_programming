#include <stdio.h>
#include "main.h"

/**
* main - Fizz-Buzz test
*
* Return: 0 success.
*/
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
			} else
			{
				printf("Fizz");
			}
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
