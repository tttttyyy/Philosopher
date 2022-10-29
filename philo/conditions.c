/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:22:52 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/26 14:40:25 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *ph)
{
	t_arg	*p;

	p = (t_arg *)ph;
	if (p->i % 2 == 1)
		ft_usleep(p->tsleep - 1);
	while (1)
	{
		pthread_mutex_lock(p->left);
		string("has taken a left fork\n", p);
		pthread_mutex_lock(p->right);
		string("has taken a right fork\n", p);
		string("is eating\n", p);
		++p->n;
		ft_usleep(p->teat - 1);
		pthread_mutex_unlock(p->left);
		pthread_mutex_unlock(p->right);
		p->timer = get_time();
		string("is sleeping\n", p);
		ft_usleep(p->tsleep - 1);
		string("is thinking\n", p);
	}
	return (0);
}

int	conditions(t_arg sct, t_main *main)
{
	int				i;
	int				n;

	i = -1;
	n = 0;
	while (++i < sct.count)
		if (pthread_create(&main->ph[i].th, NULL, &routine, main->ph + i))
			return (1);
	i = -1;
	while (++i < sct.count)
		if (pthread_detach(main->ph[i].th))
			return (0);
	while (1)
	{
		if (deadlock(main) || (sct.neat != 0 && ft_eat(main->ph)))
		{
			return (0);
		}
	}
	return (0);
}
