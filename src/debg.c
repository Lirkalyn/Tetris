/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** debg.c
*/

#include "tetris.h"

void my_put_err(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write (2, &str[i], 1);
        i++;
    }
}

void h_flag (void)
{
    my_putstr ("Usage: ./tetris [options]$\n");
    my_putstr ("Options:\n");
    my_putstr ("--help\t\tDisplay this help\n");
    my_putstr ("-l --key-left={K}    Move the tetrimino");
    my_putstr (" LEFT using the K key (def: left arrow)\n");
    my_putstr ("-r --key-right={K}    Move the tetrimino RIGHT using");
    my_putstr ("the K key (def: right arrow)\n");
    my_putstr ("-t --key-turn={K}    TURN the tetrimino clockwise 90d ");
    my_putstr ("using the K key (def: top arrow)\n");
    my_putstr (" -d --key-drop={K}   DROP the tetrimino using the K key ");
    my_putstr ("(def: down arrow)\n");
    my_putstr ("-q --key-quit={K}    QUIT the game using the K key ");
    my_putstr ("(def: ‘q’ key)\n");
    my_putstr ("-p --key-pause={K}    PAUSE/RESTART the game using the K");
    my_putstr ("key (def: space bar)\n");
    my_putstr ("--map-size={row,col} Set the numbers of rows and columns");
    my_putstr (" of the map (def: 20,10)\n");
    my_putstr ("-w --without-next    Hide next tetrimino (def: false)\n");
    my_putstr ("-D --debug             Debug mode (def: false)$\n");
}

int h_err (int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == '-' && av[1][2] == 'h'
        && av[1][3] == 'e' && av[1][4] == 'l' && av[1][5] == 'p')
    {
        h_flag();
        return (0);
    }
    else if (av[1][0] == '-' && av[1][1] != 'h' && av[1][2] != 'e'
        && av[1][3] != 'l' && av[1][4] != 'p')
    {
        my_put_err ("Syntax Error\n");
        return (84);
    }
    return (0);
}
