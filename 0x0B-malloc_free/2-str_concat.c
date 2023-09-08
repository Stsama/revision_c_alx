#include <stdlib.h>
#include"main.h"
/**
 * function that concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0, j = 0;
	char *together;

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	together = malloc((l1 + l2 + 1) * sizeof(char));

	if (together == NULL)
		return (NULL);
	if (s1)
	{
		while (i < l1)
		{	
			together[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (l1 + l2))
		{
			together[i] = s2[j];
			i++;
			j++;
		}
	}
	 return (together);
}
