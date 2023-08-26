#include "main.h"
/**
 *  function that concatenates two strings.
 */
char *_strcat(char *dest, char *src)
{
	int x, length = 0;
	
	for (x = 0; dest[x] != '\0'; x++)
	{
		length++;
	}

	for (x = 0; src[x] != '\0'; x++)
		dest[length + x] = src[x];

	return dest;
}
