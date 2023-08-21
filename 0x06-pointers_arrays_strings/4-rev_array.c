#include<stdio.h>
#include"main.h"
/**
 * function that reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
	int x, t;

	for (x = 0; x < n--; x++)
	{
		t = a[x];
		a[x] = a[n];
		a[n] = t;
	}
}
