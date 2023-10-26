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
    is_b = 0
    length = 0
    breadth = 0
    # list of breadths
    list_b = []

    for arr in grid:
        breadth = 0
        is_b = 0
        if 1 in arr:
            length += 1
            for cell in arr:
                if cell == 1 and is_b == 1:
                    breadth += 1
                if cell == 1:
                    is_b = 1
            if breadth > 0:
                list_b.append(breadth + 1)
    if len(list_b) == 0:
        return
    sum_b = 0
    for breadth in list_b:
        sum_b += breadth
    return 2 * (sum_b + length)
