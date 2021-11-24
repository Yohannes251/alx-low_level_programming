#!/usr/bin/python3
"""
This module contains a function called island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of an Island
    Args:
        grid(list): A list of list of integers
    """
    i = 0
    for x in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[x][j] == 1:
                i = i + 4
                if j - 1 >= 0 and grid[x][j - 1] == 1:
                    i -= 2
                if x - 1 >= 0 and grid[x - 1][j] == 1:
                    i -= 2
    return (i)
