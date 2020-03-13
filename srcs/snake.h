/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:22:31 by miguel            #+#    #+#             */
/*   Updated: 2020/03/13 20:08:08 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SNAKE_H
#define SNAKE_H

#define H 100
#define V 30
#define N 100

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ncurses.h>
#include <curses.h>

typedef struct s_snake
{
	int x;
	int y;
	char image;
	int modX;
	int modY;

} t_snake;

typedef struct s_fruit
{
	int x;
	int y;

} t_fruit;

t_snake g_snake[N];
t_fruit g_fruit;
unsigned int size_snake;
WINDOW *win;

void init_window();
void print_field();
void gameloop();
void update();
void input();
void exit_game();
void print_game();

#endif
