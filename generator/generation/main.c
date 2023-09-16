/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
** First edition:
** 17:18:42 03/05/22
*/

#include "../include/my.h"

static void return_error(void)
{
    fprintf(stderr, "Usage: ./generator x y [perfect]\n");
    exit(84);
}

void validate_args(int argc, char **argv, maze_t *maze)
{
    if (argc < 3 || argc > 4)
        return_error();
    for (int i = 1; i < 3; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++j) {
            if (argv[i][j] < '0' || argv[i][j] > '9')
                return_error();
        }
    }
    if (argc == 4 && strcmp(argv[3], "perfect") == 0)
        maze->is_perfect = true;
    maze->x = atoi(argv[1]);
    maze->y = atoi(argv[2]);
}

int main(int ac, char **av)
{
    maze_t *maze = memcpy(malloc(sizeof(maze_t)),&(maze_t){0, 0, false},sizeof(maze_t));
    validate_args(ac, av, maze);
    maze_generation(*maze);
}
