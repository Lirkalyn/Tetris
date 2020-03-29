/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** tetris.h
*/

#ifndef TETIS_H_
#define TETRIS_H

# include <stdio.h>
# include <ncurses.h>
# include <term.h>
# include <stdlib.h>
# include <unistd.h>
# include <termios.h>
# include <sys/ioctl.h>
# include <dirent.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/select.h>
#include <curses.h>

typedef struct key_imp {
    char *right;
    char *left;
    char *drop;
    char *quit;
    char *pause;
    char *turn;
    char *next;
    char *size;
    char *level;
} m_key;

void my_putchar (char c);
char *my_strcat (char *s1, char *s2);
char *my_strcpy (char *s1,  char *s2);
int my_strcmp (char *s1, char *s2);
int my_putstr(char *str);
int my_strlen (char *str);
int neg(int nbr);
int my_put_nbr(int nbr);
int put_key (char *ptr);
void the_beg2 (m_key t_key);
void the_beg (m_key t_key);
void print_t (m_key t_key);
int debug_m (m_key t_key);
void my_put_err(char *str);
void h_flag (void);
int h_err (int ac, char **av);




#endif