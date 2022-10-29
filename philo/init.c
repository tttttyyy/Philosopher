/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:30:19 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/26 14:34:05 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init(t_main *main, t_arg *sct)
{
	int				i;

	i = -1;
	sct->n = 0;
	main->fork = malloc(sizeof(pthread_mutex_t) * sct->count);
	main->ph = malloc(sizeof(t_arg) * sct->count);
	main->print = malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(main->print, NULL);
	while (++i < sct->count)
		if (pthread_mutex_init(main->fork + i, NULL))
			return ;
	i = -1;
	while (++i < sct->count)
	{
		main->ph[i] = *sct;
		main->ph[i].print = main->print;
		create(&main->ph[i], main->fork, i);
	}
}
