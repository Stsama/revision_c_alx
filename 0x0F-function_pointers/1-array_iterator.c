#include "function_pointers.h"
/**
 * function that executes a function given as a parameter on each element of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
