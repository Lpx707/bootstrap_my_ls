/*
** EPITECH PROJECT, 2022
** EPITECH BS MY_LS
** File description:
** bs_my_ls.c
*/

#include "../include/my.h"

int main(int argc, char *argv[], struct dirent *entry)
{
    struct stat info;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <pathname>\n", argv[0]);
        exit(EXIT_FAILURE);
        }
        if (stat(argv[1], &info) == -1) {
            perror("Error");
            exit(EXIT_FAILURE);
        }
        printf("Name: %s\n");
        check_regular_file(info);
        printf("Inode: %d\n", (int)info.st_ino);
        printf("Hard Link: %d\n", (int)info.st_nlink);
        printf("Size: %d\n", (int)info.st_size);
        printf("Allocated Space:  %lld\n", (long long)info.st_blocks);
        check_min(info);
        check_maj(info);
        printf("UID: %d\n", (int)info.st_uid);
        printf("GID: %d\n", (int)info.st_gid);
        exit(EXIT_SUCCESS);
}
