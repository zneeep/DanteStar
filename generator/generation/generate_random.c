/*
** EPITECH PROJECT, 2022
** generate_random.c
** File description:
** generate_random.c
** First edition:
** 17:30:56 03/05/22
*/

#include "../include/my.h"

unsigned char generate_random_val(int x)
{
    unsigned char rand_val;
    FILE *f = fopen("/dev/urandom", "r");

    fread(&rand_val, sizeof(rand_val), 1, f);
    fclose(f);
    return (rand_val % x);
}
