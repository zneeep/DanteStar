/*
** EPITECH PROJECT, 2022
** maze_perfect.c
** File description:
** maze_perfect.c
** First edition:
** 17:22:39 03/05/22
*/

#include "../include/my.h"

void fix_last(char **maze[], int y, int x)
{
    if ((y % 2) == 0)
        return;
    (*maze)[y][x - 1] = 'X';
    (*maze)[y][x] = '*';
}

void path_line(char **maze[], int x, int y)
{
    for (int i = 0; i <= x; i++)
        (*maze)[y][i] = '*';

    return;
}

void wall_line(char **maze[], int x, int y)
{
    int val = generate_random_val(x + 1);

    for (int i = 0; i <= x; i++) {
        if (i == val)
            (*maze)[y][i] = '*';
        else
            (*maze)[y][i] = 'X';
    }
}

void fill_maze(char **maze[], int i, int x)
{
    if ((i % 2) == 0)
        path_line(maze, x, i);
    else
        wall_line(maze, x, i);
}

void perfect_maze(char **maze[], int x, int y)
{
    for (int i = 0; i <= y; i++)
        fill_maze(maze, i, x);
    fix_last(maze, y, x);
}
