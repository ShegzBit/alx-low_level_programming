#!/usr/bin/python3
"""
This module contains a python implementation of
island_perimeter

Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    # tracks breadth if 1 appears more than once
    # resets to 0 after each row
    perimeter = 0
    
    length = len(grid)
    breadth = len(grid[0])

    for x in range(length):
        for y in range(breadth):
            if grid[x][y] == 1:
                if x > 0 and grid[x - 1][y] == 0:
                    perimeter += 2
                if y > 0 and grid[x][y - 1] == 0:
                    perimeter += 2
    return perimeter
