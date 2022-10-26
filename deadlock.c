/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deadlock.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:42 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/26 15:01:53 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	deadlock(t_main *main)
{
	int	i;

	i = 0;
	while (i < main->ph[i].count)
	{
		long long g = get_time() - main->ph->timer;
		long long t = main->ph->tdie;
		
		if (g > t)
		{
			//usleep(10);
			printf("hello\n");
			printf("%llu = get_time\n", get_time());
			printf("%llu = timer\n", main->ph->timer);
			printf("%llu = t , tdie\n", t);
			printf("%llu = g , minus\n", g);
			printf("%llu %d died\n", get_time() - main->ph->start, main->ph->i + 1);
			return (1);
		}
		++i;
	}
	return (0);
}
