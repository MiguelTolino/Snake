/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:22:31 by miguel            #+#    #+#             */
/*   Updated: 2020/02/17 01:54:06 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define H 90
#define V 25
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
	
}   t_snake;

typedef struct s_fruit
{
	int x;
	int y;
	
} t_fruit;


t_snake g_snake[N];
t_fruit g_fruit;



void init(char field[V][H], int *size_snake);
void print_field(char field[V][H]);
void fill_field(char field[V][H]);
void snake_in_field(char field[V][H], int *size_snake);
void fill_structs(char field[V][H], int *size_snake);
void fill_snake();
void fill_fruit();
void gameloop(char field[V][H], int *size_snake);
void fruit_in_field(char field[V][H]);
void update();
void input(char field[V][H], int *size_snake, int *end);







