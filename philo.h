/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:25:39 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/26 15:00:20 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

typedef struct s_arg
{
	int					count;
	long long			tdie;
	long long			teat;
	long long			tsleep;
	int					neat;
	int					i;
	int					n;
	long long			start;
	long long			timer;
	pthread_t			th;
	pthread_mutex_t		*right;
	pthread_mutex_t		*left;
	pthread_mutex_t		*print;
}		t_arg;

typedef struct	s_main
{
	pthread_mutex_t		*print;
	pthread_mutex_t     *fork;
	t_arg				*ph;
}		t_main;

int					ft_atoi(const char *str);
int					initialize_args(t_arg *ph, char **argv);
int					deadlock(t_main *main);
int					ft_putnbr(int i);
int					ft_eat(t_arg *ph);
int					one(t_arg sct);
long long			get_time(void);
void				add_time(t_arg **ph);
void				ft_usleep(unsigned long long i);
void				create(t_arg *ph, pthread_mutex_t *fork, int i);
void				init(t_main *main, t_arg *sct);
void				mutex_destroy(pthread_mutex_t *mutex, int count);
int					conditions(t_arg sct, t_main *main);
void				string(char *s, t_arg *p);
int					destroy(t_arg *ph, pthread_mutex_t *fork);
#endif
