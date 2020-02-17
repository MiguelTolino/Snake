/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameloop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:26:33 by miguel            #+#    #+#             */
/*   Updated: 2020/02/16 23:41:42 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void gameloop(char field[V][H], int *size_snake)
{
    int end;

    end = 0;
    while (!end)
    {
        print_field(field);
        input(field,size_snake, &end);
        if (end)
            break;
        update(field, snake_in_field);
        system("clear");
    }
    
    
    
}