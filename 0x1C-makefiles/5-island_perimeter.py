#!/usr/bin/python3
'''Perimeter Island Solution'''


def iterate_island(grid, row, col, max_row, max_col):
    '''
    Iterates throught the island checking for borders
    '''

    if row < 0 or row is max_row or col < 0 or col == max_col:
        return 0

    if grid[row][col] == 0 or grid[row][col] == 2:
        return 0

    length = 0
    grid[row][col] = 2

    #Check above position
    if row is 0 or grid[row - 1][col] == 0:
        length += 1

    #Check below position
    if row is max_row - 1 or grid[row + 1][col] == 0:
        length += 1

    #Check left position
    if col == 0 or grid[row][col - 1] == 0:
        length += 1

    #Check right position
    if col == max_col - 1 or grid[row][col + 1] == 0:
        length += 1

    length += iterate_island(grid, row - 1, col, max_row, max_col)
    length += iterate_island(grid, row + 1, col, max_row, max_col)
    length += iterate_island(grid, row, col - 1, max_row, max_col)
    length += iterate_island(grid, row, col + 1, max_row, max_col)

    return length


def island_perimeter(grid):
    '''
    Calculate the island perimeter and then return it
    '''
    len_row = len(grid)
    len_col = len(grid[0])
    perimeter = 0

    for row in range(0, len_row):
        for col in range(0, len_col):
            if grid[row][col] == 1:
                perimeter = iterate_island(
                    grid, row, col, len_row, len_col)
                break

    return perimeter
