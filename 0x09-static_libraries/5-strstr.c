#include"main.h"
/**
 * function that locates a substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *l = haystack;
		char *p = needle;
		
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
