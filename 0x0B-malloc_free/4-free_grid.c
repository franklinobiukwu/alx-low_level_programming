#include "main.h"
#include <stdlib.h>

/**
* free_grid - free pointer to array
*
* @grid: pointer to array
* @height: height of array
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	/*Free each row of grid*/
	while (height > 0)
	{
		free(grid[i]);
		i++;
		height--;
	}

	/*Free grid*/
	free(grid);
}
