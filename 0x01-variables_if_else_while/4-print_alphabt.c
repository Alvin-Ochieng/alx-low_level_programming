#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z' && ch != 'q' &&c ch != 'e', ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
