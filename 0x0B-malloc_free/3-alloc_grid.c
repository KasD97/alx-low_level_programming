#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to an array
 * of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to array or NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **arr, m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		arr[m] = malloc(width * sizeof(int));

		if (arr[m] == NULL)
		{
			for (m = 0; m < height; m++)
			{
				free(arr[m]);
			}
			free(arr);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			arr[m][n] = 0;
	}
	return (arr);
}
