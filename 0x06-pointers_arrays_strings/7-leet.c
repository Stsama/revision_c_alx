#include "main.h"
/**
 * function that encodes a string into 1337.
 */
char *leet(char *n)
{
	int x, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[x] == s1[j])
				n[x] = s2[j];
		}
	}
	return (n);
}
