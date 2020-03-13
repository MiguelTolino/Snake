/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:59:10 by miguel            #+#    #+#             */
/*   Updated: 2020/03/14 00:38:36 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void update()
{
    int i;

    i = size_snake - 1;

    while (i > 0)
    {
        g_snake[i].x = g_snake[i - 1].x;
        g_snake[i].y = g_snake[i - 1].y;
        g_snake[i].image = ' ';
        i--;
    }
    g_snake[0].x += g_snake[0].modX;
    g_snake[0].y += g_snake[0].modY;
}
