#include <stdlib.h>
#include"main.h"
/**
 * function that creates an array of chars, and initializes it with a specific char
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;
	
	if (size == 0)
		return NULL;
	a = malloc(size * sizeof(char));
	
	if (a == NULL)
		return NULL;
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
