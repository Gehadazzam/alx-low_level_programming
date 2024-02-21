#!/usr/bin/python3
"""module of island"""


def island_perimeter(grid):
    """
    Create a function def island_perimeter(grid):
    """
    counter = 0
    column, row = len(grid), len(grid[0])
    for x, z in enumerate(grid):
        for i, j in enumerate(z):
            if j == 1:
                if i == 0 or grid[x][i - 1] != 1:
                    counter += 1
                if i == row or grid[x][i + 1] != 1:
                    counter += 1
                if x == 0 or grid[x - 1][i] != 1:
                    counter += 1
                if x == column or grid[x + 1][i] != 1:
                    counter += 1
    return counter
