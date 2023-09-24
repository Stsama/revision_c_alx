#include"main.h"
/**
 * putchaar - print a character
 * @c: Character to be printed
 * Return: 1
 */
int putchaar(char c)
{
	return (write(1, &c, 1));
}
