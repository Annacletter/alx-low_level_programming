#!/usr/bin/python3
"""
Returns the perimeter of the island
described in grid
"""


def island_perimeter(grid):
    """
    Calculates the perimeter on a grid
    Arguments:
    ---------
    grid: matrix
        grid to calculate the perimeter
    Return:
    ------
    The perimeter calculated
    """
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    perimeter += 1
                if y == 0 or grid[x][y - 1] == 0:
                    perimeter += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    perimeter += 1
                if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                    perimeter += 1
    return (perimeter)
