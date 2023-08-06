#include <stdio.h>

/**
 * program that computes and prints the sum of all the multiples of 3 or 5 below 1024
 */
int main(void)
{
	int x, result;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % )5 == 0)
		{
			result += x;
		}
	}
	printf("%d \n", result);
	return (0);
}
