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

    cells = 0

    for nested_list in grid:
        for cell in nested_list:
            if cell == 1:
                cells += 1
    perimeter = ((cells - 2) * 2) + 2 * 3
    return perimeter
