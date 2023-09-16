/*
** EPITECH PROJECT, 2022
** maze_imperfect.c
** File description:
** maze_imperfect.c
** First edition:
** 17:40:40 03/05/22
*/

#include "../include/my.h"

void fill_imperfect(char **maze[], int x, int y)
{
    int val;
    for (int j = 0; j <= x; j++) {
        val = generate_random_val(2);
        if (val == 1)
            (*maze)[y][j] = '*';
    }
}

void imperfect_maze(char **maze[], int x, int y)
{
    for (int i = 0; i <= y; i++)
        fill_imperfect(maze, x, i);

}
