#include"main.h"
/**
 * function that capitalizes all words of a string.
 */
char *cap_string(char *n)
{
	int x;
	
	while (n[x])
	{
		while (n[x] >= 'a' && n[x] <= 'z')
			x++;
		if (n[x - 1] == ' ' ||
		    n[x - 1] == '\t' ||
		    n[x - 1] == '\n' ||
		    n[x - 1] == ',' ||
		    n[x - 1] == ';' ||
		    n[x - 1] == '.' ||
		    n[x - 1] == '!' ||
		    n[x - 1] == '?' ||
		    n[x - 1] == '"' ||
		    n[x - 1] == '(' ||
		    n[x - 1] == ')' ||
		    n[x - 1] == '{' ||
		    n[x - 1] == '}' ||
		    x == 0)
			n[x] -= 32;
		x++;
	}
	return n;
}
