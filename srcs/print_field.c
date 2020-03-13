/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_field.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:26:40 by miguel            #+#    #+#             */
/*   Updated: 2020/03/14 00:45:15 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void print_snake()
{
    int i;

    i = 1;
    g_snake[0].x = 10;
    g_snake[0].y = V / 2;
    g_snake[0].image = ' ';
    g_snake[0].modX = 1;
    g_snake[0].modY = 0;

    while (i < size_snake)
    {
        g_snake[i].x = g_snake[i - 1].x - 1;
        g_snake[i].y = g_snake[i - 1].y;
        g_snake[i].image = ' ';
        i++;
    }
    i = 0;
    while (i < size_snake)
    {
        wattron(win, A_REVERSE);
        mvwaddch(win, g_snake[i].y, g_snake[i].x, g_snake[i].image);
        wattroff(win ,A_REVERSE);
        i++;
    }
}

void print_fruit()
{
    srand(time(NULL));

    g_fruit.x = rand() % H - 2;
    g_fruit.y = rand() % V - 2;
    wattron(win, A_REVERSE);
    mvwaddch(win, g_fruit.y, g_fruit.x, ' ');
    wattroff(win, A_REVERSE);
    
}

void print_level()
{
    attron(A_BOLD | A_ITALIC);
    mvprintw(8, 90, "LEVEL: %i", size_snake - 4);
    attroff(A_BOLD | A_ITALIC);
    refresh();
}

void print_field()
{
    print_snake();
    print_fruit();
    print_level();
    wrefresh(win);
}

void print_game()
{
    werase(win);
    int i;

    i = 0;
    while (i < size_snake)
    {
        wattron(win,A_REVERSE);
        mvwaddch(win, g_snake[i].y, g_snake[i].x, g_snake[i].image);
        wattron(win, A_REVERSE);
        i++;
    }
    mvwaddch(win, g_fruit.y, g_fruit.x, ' ');
    print_level();
    refresh();
    wrefresh(win);
}
