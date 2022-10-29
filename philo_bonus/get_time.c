/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:11:56 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/27 15:07:28 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

long long	get_time(void)
{
/*	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	return ((current_time.tv_sec) * 1000 + (current_time.tv_usec) / 1000);
}*/
	struct timeval  current_time;
	long long	time;

	gettimeofday(&current_time, NULL);
	time = (current_time.tv_sec) * 1000 + (current_time.tv_usec) / 1000;
	return (time);
	}
