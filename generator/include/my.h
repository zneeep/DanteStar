/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Created by Arthur MAQUET
** First edition:
** 14:47:16 27/04/2022
*/

#ifndef B_CPE_200_LYN_2_1_DANTE_ARTHUR_MAQUET_MY_H
    #define B_CPE_200_LYN_2_1_DANTE_ARTHUR_MAQUET_MY_H

    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include <sys/time.h>
    #include "structures.h"

    #define PATH_CHAR '*'
    #define WALL_CHAR 'X'
    #define VOID_CHAR '.'

void validate_args(int argc, char **argv, maze_t *maze);
unsigned char generate_random_val(int x);
void perfect_maze(char **maze[], int x, int y);
void imperfect_maze(char **maze[], int x, int y);
void maze_generation(maze_t maze);

#endif
