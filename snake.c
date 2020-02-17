/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:22:12 by miguel            #+#    #+#             */
/*   Updated: 2020/02/16 23:32:15 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

int main()
{
    char field[V][H];
    int size_snake;

    size_snake = 4;
    init(field, &size_snake);
    gameloop(field,&size_snake);
    endwin();
    return (0);
}