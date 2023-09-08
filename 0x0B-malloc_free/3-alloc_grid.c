#include <stdlib.h>
#include "main.h"
/**
 * function that returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width == 0 || height == 0)
		return (NULL);

	array =(int **) malloc(height  * sizeof(int*));

	if (array == 0)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j < i; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}	
