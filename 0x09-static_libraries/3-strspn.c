#include"main.h"
/**
 * function that gets the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	while (*s)
	{
		int i = 0;
		
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
