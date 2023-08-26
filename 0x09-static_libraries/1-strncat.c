#include "main.h"
/**
 *  function that concatenates two strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, x, y;

	for (x = 0; dest[x] != '\0'; x++)
		length++;
	for (y = 0; y < n && src[y] != '\0';)
		dest[length + y] = src[y];
	dest[length + y] = '\0';
	return dest;
}

