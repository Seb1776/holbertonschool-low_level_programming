#!/usr/bin/python3
'''Perimeter Island Solution'''


def island_perimeter(grid):
    """Calculate the island perimeter and then return it

    Parameters
    ----------
    grid : bidimensional array
        Grid that defines the island area
    """

    len_row = len(grid)
    len_col = len(grid[0])
    perimeter = 0

    for row, x in enumerate(grid):
        for col, y in enumerate(x):
            if y is 1:
                if row is 0 or grid[row - 1][col] != 1:
                    perimeter += 1
                if col is 0 or grid[row][col - 1] != 1:
                    perimeter += 1
                if col is len_col or grid[row][col + 1] != 1:
                    perimeter += 1
                if row is len_row or grid[row + 1][col] != 1:
                    perimeter += 1

    return perimeter
