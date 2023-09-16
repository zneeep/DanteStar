/*
** EPITECH PROJECT, 2022
** maze_generation.c
** File description:
** maze_generation.c
** First edition:
** 17:50:20 03/05/22
*/

#include "../include/my.h"

void maze_generation(maze_t maze)
{
    char **maze_map = malloc(sizeof(char *) * (maze.y));

    for (int i = 0; i < maze.y; ++i) {
        maze_map[i] = malloc(sizeof(char) * (maze.x));
        for (int j = 0; j < maze.x; ++j)
            maze_map[i][j] = '.';
        maze_map[i][maze.x] = '\0';
    }
    perfect_maze(&maze_map, maze.x - 1, maze.y - 1);
    if (maze.is_perfect == false)
        imperfect_maze(&maze_map, maze.x - 1, maze.y - 1);
    for (int i = 0; i < maze.y - 1; i++)
        printf("%s\n", maze_map[i]);
    printf(("%s"), maze_map[maze.y - 1]);
}
