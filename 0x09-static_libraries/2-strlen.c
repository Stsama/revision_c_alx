/**
 * File: 2-strlen.c
 * Author: Albert Ezoula
 */
#include "main.h"
/**
 * int _strlen -  function that returns the length of a string.
 * @s: pointer to a string*
 */
int _strlen(char *s)
{
	int total = 0;

	while (*s++)
		total++;
	return (total);
}
