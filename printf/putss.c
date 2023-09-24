#include"main.h"
/**
 * putss - prints a string
 *
 * @c: string to be printed
 * Return: nber of bytes
 */
int putss(char *c)
{	
	int count = 0;

	while (*c)
	{
		putchaar(*c++);
		count++;
	}
	return (count);
}


/**
 * puts2 - prints a string
 *
 * @c: string to be printed
 * Return: nber of bytes
 */
int puts2(int i);	
