#include "main.h"
/**
 *  function that copies the string pointed to by src
 *  ncluding the terminating null byte (\0)
 *  to the buffer pointed to by dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	return (dest);
}
