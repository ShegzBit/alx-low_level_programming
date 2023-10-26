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
    is_b = 0
    length = 0
    breadth = 0
    for arr in grid:
        # tracks a breadth reset to 0 after each row
        # based on if there is more than one 1 in a row
        is_b = 0
        if 1 in arr:
            length += 1
            for obj in arr:
                # check if obj is 1 and is_b is 1
                if obj == 1 and is_b == 1:
                    breadth += 1
                    # set is_b to 1 after every encounter of 1
                if obj == 1:
                    is_b = 1
    if breadth == 0:
        return 0
    perimeter = 2 * (length + (breadth + 1))
    return perimeter
