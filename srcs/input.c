/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:29:30 by miguel            #+#    #+#             */
/*   Updated: 2020/03/14 00:45:57 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

int limits()
{
    int i;

    i = 1;
    if (g_snake[0].x == (H - 1) || g_snake[0].y == (V - 1) || g_snake[0].x == 0 || g_snake[0].y == 0)
    {
        return (1);
    }
    while (i < size_snake)
    {
        if (g_snake[0].x == g_snake[i].x && g_snake[0].y == g_snake[i].y)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int eat_fruit()
{
    if (g_snake[0].x == g_fruit.x && g_snake[0].y == g_fruit.y)
    {
        g_fruit.x = rand() % H - 2;
        g_fruit.y = rand() % V - 2;
        return (1);
    }
    return (0);
    
}

void press_key()
{
    int key;

    key = getch();
    if (key == KEY_UP && g_snake[0].modY != 1)
    {   
        g_snake[0].modX = 0;
        g_snake[0].modY = -1;
        usleep(50000);
    }
    if (key == KEY_DOWN &&  g_snake[0].modY != -1)
    {   
        g_snake[0].modX = 0;
        g_snake[0].modY = 1;
        usleep(50000);
    }
    if (key == KEY_LEFT &&  g_snake[0].modX != 1)
    {   
        g_snake[0].modX = -1;
        g_snake[0].modY = 0;
    }
    if (key == KEY_RIGHT &&  g_snake[0].modX != -1)
    {   
        g_snake[0].modX = 1;
        g_snake[0].modY = 0;
    }
}

void input()
{
    if(limits())
        exit_game();
    size_snake += eat_fruit();
    press_key();
}