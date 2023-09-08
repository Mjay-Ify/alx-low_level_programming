#include <stdio.h>

/**
 * main - main function
 *
 * Return: when 0
 */

int main(void)
{
	int y;
	char s;

	for (y = 0 ; y < 10 ; y++)
		putchar(y + '0');
	for (s = 'a' ; s <= 'f' ; s++)
		putchar(s);
	return (0);
}
