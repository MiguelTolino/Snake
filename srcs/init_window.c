/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 04:21:47 by miguel            #+#    #+#             */
/*   Updated: 2020/03/14 00:37:36 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void init_window()
{
    initscr();
    noecho();
    nodelay(stdscr, true);
    keypad(stdscr, 1);
    curs_set(0);
    //clear();
    win = newwin(V, H, 10, 50);
    if (has_colors())
    {
        start_color();
        init_pair(1, COLOR_GREEN, COLOR_BLUE);
    }
    wbkgd(win, COLOR_PAIR(1));
    refresh();
    wrefresh(win);
}