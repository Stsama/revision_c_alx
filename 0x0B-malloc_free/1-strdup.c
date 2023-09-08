#include <stdlib.h>
#include "main.h"
/**
 * function that returns a pointer to a newly allocated space in memorye
 * which contains a copy of the string given as a parameter.
 */
char *_strdup(char *str)
{
	int count = 0;
	int i;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[count])
	{
		count++;
	}
	c = malloc(count * sizeof(char));
	
	if (c == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
