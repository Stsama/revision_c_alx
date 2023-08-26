#include "main.h"
/**
 * function that checks for uppercase character.
 * @c: int in parametter
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}else
		return (0);
}
