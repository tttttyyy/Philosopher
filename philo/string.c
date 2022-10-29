/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:15:14 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/19 16:30:30 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	string(char *s, t_arg *p)
{
	pthread_mutex_lock(p->print);
	printf("%llu %d %s", get_time() - p->start, p->i + 1, s);
	pthread_mutex_unlock(p->print);
}
