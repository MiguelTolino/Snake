/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_field.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:34:35 by miguel            #+#    #+#             */
/*   Updated: 2020/02/17 01:43:11 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void print_field(char field[V][H])
{
    int i;
    int j;

    i = 0;
    while (i < V)
    {
        j = 0;
        while (j < H)
        {
            printw("%c",field[i][j]);
            refresh();
            j++;
        }
        printw("%c",'\n');
        refresh();
        i++;
    }
    
}