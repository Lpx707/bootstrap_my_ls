/*
** EPITECH PROJECT, 2022
** bootstrap my_ls
** File description:
** my_ls
*/

#include "../include/my.h"

int check_regular_file(struct stat info)
{
    if (S_ISREG(info.st_mode) == 1) {
        printf("Type: %c\n", 'f');
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

/*
int display_name(int argc, char *argv[])
{
    int i = 0;
    int bs_pos = 0;
    int len = my_strlen(argv[1]);

    while (i < len) {
        if (argv[1][i] == '/')
            bs_pos = i;
            i++;
    }
    i = bs_pos + 1;
    while (i < len) {
        my_putchar(argv[1][i]);
        i++;
    }
    return 0;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int nb = 0;

    while (str[nb] != '\0') {
        nb = nb + 1;
    }
    return (nb);
}
*/