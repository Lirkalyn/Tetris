/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** my_other.c
*/

#include "tetris.h"

char *my_strcat (char *s1, char *s2)
{
    int len = my_strlen(s1) + my_strlen(s2);
    int i = 0, j = 0;
    char *s3 = (char *)malloc(sizeof(char) * len + 1);

    while (s1[i] != '\0') {
        s3[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != '\0') {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
}

int my_strcmp (char *s1, char *s2)
{
    int i;
    if (my_strlen(s1) != my_strlen(s2)) {
        if (my_strlen(s1) < my_strlen(s2)) {
            return (-1);
        }
        if (my_strlen(s1) > my_strlen(s2)) {
            return (1);
        }
    }
    for (i = 0; i < my_strlen(s1); i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] < s2[i]) {
                return (-1);
            }
            if (s1[i] > s2[i]) {
            return (1);
            }
        }
    }
    return (0);
}

char *my_strcpy (char *s1,  char *s2)
{
    int j = 0, i;
    s2 = (char *)malloc(sizeof(char) * my_strlen(s1) + 1);

    for (i = 0; s1[i] != '\0'; i++) {
        s2[j] = s1[i];
        j++;
    }
    s2[i] = '\0';
    return (s2);
}