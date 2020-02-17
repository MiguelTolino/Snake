/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:59:10 by miguel            #+#    #+#             */
/*   Updated: 2020/02/17 01:52:11 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

static void update_snake(int *size_snake)
{
    int i;

    i = 1;
    g_snake[0].x += g_snake[0].modX;
    g_snake[0].y += g_snake[0].modY;

    while (i < *size_snake)
    {
        g_snake[i].x = g_snake[i - 1].x ;
        g_snake[i].y = g_snake[i - 1].y;
        g_snake[i].image = 'X';
        i++;
    }
}

static void update_fruit(char field[V][H])
{
    field[g_fruit.y][g_fruit.x] = '@';
}

void update(char field[V][H], int *size_snake)
{
    fill_field(field);
    update_snake(size_snake);
    update_fruit(field);
}