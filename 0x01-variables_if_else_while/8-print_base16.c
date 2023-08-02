#include <stdio.h>

/**
 * main - This is the entry point
 * Return:  Always 0
 */
int main(void)
{
	int x = 0;
	char c = 'a';

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
