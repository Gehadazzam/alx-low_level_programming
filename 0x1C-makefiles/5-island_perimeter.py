#!/usr/bin/python3
"""module of island"""


def island_perimeter(grid):
    """
    Create a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid:
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one
    island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
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
