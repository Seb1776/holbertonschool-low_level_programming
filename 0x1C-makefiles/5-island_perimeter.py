#!/usr/bin/python3
'''Island Perimeter Solution Module'''


def island_perimeter(grid):
    '''Defines the perimeter of an island based on a grid'''

    perimeter = 0
    len_col = len(grid) - 1
    len_row = len(grid[0]) - 1

    for row, x in enumerate(grid):
        for col, y in enumerate(x):
            if y == 1:
                if row == 0 or grid[row - 1][col] != 1:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] != 1:
                    perimeter += 1
                if col == len_row or grid[row][col + 1] != 1:
                    perimeter += 1
                if row == len_col or grid[row + 1][col] != 1:
                    perimeter += 1

    return perimeter
