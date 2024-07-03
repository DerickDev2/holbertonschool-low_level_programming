#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the created 2D array, or NULL on failure 
 *         or if width/height is <= 0.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    // If width or height is <= 0, return NULL
    if (width <= 0 || height <= 0)
        return (NULL);

    // Allocate memory for height number of rows (each row is a pointer to int)
    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL); // Return NULL if memory allocation fails

    // Loop over each row
    for (i = 0; i < height; i++)
    {
        // Allocate memory for width number of integers in each row
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            // If memory allocation fails, free previously allocated rows
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid); // Free the array of row pointers
            return (NULL); // Return NULL after freeing memory
        }
        // Initialize each element in the row to 0
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    // Return the pointer to the 2D array
    return (grid);
}
