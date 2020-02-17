/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:29:30 by miguel            #+#    #+#             */
/*   Updated: 2020/02/17 01:47:37 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

int limits(int *size_snake)
{
    int i;

    i = 1;
    if (g_snake[0].x == (V - 1) || g_snake[0].y == H - 1 || g_snake[0].x == 0 || g_snake[0].y == 0)
    {
        return (1);
    }
    while (i < *size_snake)
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
        g_fruit.x = rand() % (H - 1) + 1;
        g_fruit.y = rand() % (V - 1) + 1;
        return (1);
    }
    return (0);
    
}

void press_key()
{
    int key;

    key = getch();
    if (key == 'w')
    {   
        g_snake[0].modX = -1;
        g_snake[0].modY = 0;
    }
    if (key == 's')
    {   
        g_snake[0].modX = 1;
        g_snake[0].modY = 0;
    }
    if (key == 'a')
    {   
        g_snake[0].modX = 0;
        g_snake[0].modY = -1;
    }
    if (key == 'd')
    {   
        g_snake[0].modX = 0;
        g_snake[0].modY = 1;
    }
}

void input(char field[V][H], int *size_snake, int *end)
{
    *end = limits(size_snake);
    *size_snake += eat_fruit();
    press_key();
}