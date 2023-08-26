#include "main.h"

/**
 * function that computes the absolute value of an integer
 */
int _abs(int x)
{
	if (x < 0)
		x *= (-1);
	return (x);
}
