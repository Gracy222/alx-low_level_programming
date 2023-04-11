#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create a matrix using malloc
 * @width: width of the mtrix
 * @height:height of the matrix
 *
 * Return: return a pointer of pointer or null
 */

int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

	if (grid[i] == NULL

	for (int j = 0; j < i; j++)

	free(grid[j]);


	free(grid);
	return (NULL);
	}

}
