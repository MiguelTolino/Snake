/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:26:40 by miguel            #+#    #+#             */
/*   Updated: 2020/02/16 21:15:38 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void fill_structs(char field[V][H], int *size_snake)
{
    fill_field(field);
    fruit_in_field(field);
    snake_in_field(field, size_snake);
}

void fill_field(char field[V][H])
{
    int i;
    int j;

    i = 0;
    while (i < V)
    {
        j = 0;
        while (j < H)
        {
            if (i == 0 || i == V - 1)
            {
                field[i][j] = '-';
            }
            else if (j == 0 || j == H - 1)
            {
                field[i][j] = '|';
            }
            else
            {
                field[i][j] = ' ';
            }
            j++;
        }
        i++;
    }
}

void fill_snake(int *size_snake)
{
    int i;

    i = 0;
    g_snake[0].x = 10;
    g_snake[0].y = V / 2;
    g_snake[0].image = '0';

    while (i < *size_snake)
    {
        g_snake[i].modX = 1;
        g_snake[i].modY = 0;
        if (i > 0)
        {
            g_snake[i].x = g_snake[i - 1].x - 1;
            g_snake[i].y = g_snake[i - 1].y;
            g_snake[i].image = 'X';
        }
        i++;
    }
}

void fill_fruit()
{
    srand(time(NULL));

    g_fruit.x = rand() % (H - 1) + 1;
    g_fruit.y = rand() % (V - 1) + 1;
}

void fruit_in_field(char field[V][H])
{
    fill_fruit();
    field[g_fruit.y][g_fruit.x] = '@';
}

void snake_in_field(char field[V][H], int *size_snake)
{
    fill_snake(size_snake);
    int i;

    i = 0;
    while (i < *size_snake)
    {
        field[g_snake[i].y][g_snake[i].x] = g_snake[i].image;
        i++;
    }
}