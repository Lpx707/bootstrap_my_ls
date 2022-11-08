/*
** EPITECH PROJECT, 2022
** bootstrap my_ls
** File description:
** my_ls
*/

#include "../include/my.h"

int check_type(struct stat info)
{
    if (S_ISREG(info.st_mode) == 1) {
        printf("Type: %c\n", 'f');
    }
    else {
        printf("Type: This is not a regular file \n");
    }
    return 0;
}

int check_maj(struct stat info)
{
    int maj, min;
        maj = S_ISCHR(info.st_dev);
        printf("Major: %u\n", maj);
        return 0;
}

int check_min(struct stat info)
{
    int maj, min;
        min = S_ISBLK(info.st_dev);
        printf("Minor: %u\n", min);
        return 0;
}
