/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** main.c
*/

#include "tetris.h"

/*char **copy(char *envp[], int add, int *pos)
{
    int i = 0;
    int len = 0;
    char **rsl;

    for (len = 0; envp[len] != NULL; len++);
    rsl = (char **)malloc((len + add) * sizeof(char *));
    if (rsl == NULL)
        return NULL;
    *pos = len;
    rsl[len + (add - 1)] = NULL;
    for (i = 0; envp[i] != NULL; i++) {
        for (len = 0; envp[i][len] != '\0'; len++);
        rsl[i] = (char *)malloc((len + 1) * sizeof(char));
        if (rsl[i] == NULL)
            return NULL;
        rsl[i][len] = '\0';
        for (int j = 0; envp[i][j] != '\0'; rsl[i][j] = envp[i][j], j++);
    }
    return rsl;
}

int choice(char **envp[], char **splitted, char **arg)
{
    switch (choose(splitted[0]))
    {
        case 0:
            return cd(splitted, *envp);
        case 1:
            if (splitted[2][0] == '\0')
                return menv(splitted, *envp);
            else
                return msetenv(splitted, envp, arg);
        case 2:
            return munsetenv(splitted, envp);
        case 3:
            return menv(splitted, *envp);
        case 4:
            return mexit(splitted, *envp);
        case 50:
            return prefork(*envp, splitted, arg);
        default:
        break;
    }
}

char *line_cleaner(char *tmp)
{
    for (int i = 0; tmp[i] != '\0'; i++) {
        if (tmp[i] == ' ' && tmp[(i - 1)] == ' ') {
            for (int j = i; tmp[j] != '\0'; tmp[j] = tmp[(j + 1)], j++);
            i -= 2;
        }
        if (tmp[i] == '\t' && tmp[(i - 1)] != ' ' && tmp[(i + 1)] != ' ') {
            tmp[i] = ' ';
            i -= 2;
        }
        if (tmp[i] == '\t' && tmp[(i - 1)] == ' ') {
            for (int j = i; tmp[j] != '\0'; tmp[j] = tmp[(j + 1)], j++);
            i -= 2;
        }
    }
    return tmp;
}*/

int main(int argc, char *argv[], char *envp[])
{
    int c;
    m_key t_key;
    if (envp[0] == NULL)
        return 84;

    if (argv[1][0] == '-' && argv[1][1] == 'd') {
            debug_m (t_key);
            return (0);
        }
    if (argv[1][0] == '-') {
        h_err (argc, argv);
        return (0);
    }
}