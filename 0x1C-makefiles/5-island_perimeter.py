#!/usr/bin/python3i
"""Defines a function that measures an island's perimeter."""


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid.
    Args:
        grid: a list of list of integers
    Returns:
        perimieter of the island."""
        width = len(grid[0])
        height = len(grid)
        edges = 0
        size = 0

        for p in range(height):
            for q in range(width):
                if grid[p][q] == 1:
                    size += 1
                    if (q > 0 and grid[p][q - 1] == 1):
                        edges += 1
                    if (p > 0 and grid[p - 1][q] == 1):
                        edges += 1
        return size * 4 - edges * 2
