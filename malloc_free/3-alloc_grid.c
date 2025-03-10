#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for each column in each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory in case of failure */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
