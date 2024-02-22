#!/usr/bin/python3
"""Module that defines a function measuring an island's perimeter."""


def island_perimeter(grid):
    """Function that returns the perimeter of the island.
    Args:
        grid: a list of list of integers
    Returns:
        The perimieter of the island."""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
