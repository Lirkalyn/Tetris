/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** debug.c
*/

# include "tetris.h"

int put_key (char *ptr)
{
    int i = 0;

    for (; ptr[i] != '\0'; i++) {
        if (ptr[i] == 27)
            my_putstr ("^E");
        else
            my_putstr (&ptr[i]);
    }
    if (ptr[i] == ' ' && my_strlen (ptr) == 1) {
        my_putstr ("(space)");
        return (1);
    }
    return (0);
}

void the_beg2 (m_key t_key)
{
    my_putstr ("Level : ");
    my_putstr (t_key.level);
    my_putstr ("\n");
    my_putstr ("Size : ");
    my_putstr (t_key.size);
    my_putstr ("\n");
}

void the_beg (m_key t_key)
{
    my_putstr ("Key Left : ");
    put_key(t_key.left);
    my_putstr ("Key Right : ");
    put_key(t_key.right);
    my_putstr ("Key Turn : ");
    put_key(t_key.turn);
    my_putstr ("Key Drop : ");
    put_key(t_key.turn);
    my_putstr ("Key Quit : ");
    put_key(t_key.quit);
    my_putstr ("Key Pause : ");
    put_key(t_key.pause);
    my_putstr ("Next : ");
    if ((t_key.next) ? my_putstr ("Yes\n") :
            my_putstr("No\n") < 0 );
        exit (1);
    the_beg2 (t_key);
}

void print_t (m_key t_key)
{
    int nb = 0, i = 1;

    my_putstr ("Tetriminos : ");
    my_put_nbr (nb);
    my_putstr ("\n");
}

int debug_m (m_key t_key)
{
    if (write (1, "*** DEBUG MODE ***\n", 20) < 0)
        return (1);
    the_beg (t_key);
    my_putstr ("Press a key to start Tetris\n");
}