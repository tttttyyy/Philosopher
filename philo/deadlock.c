/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deadlock.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:42 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/26 15:35:27 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	deadlock(t_main *main)
{
	int	i;

	i = 0;
	while (i < main->ph[i].count)
	{
		if (get_time() - main->ph->timer > main->ph->tdie)
		{
			printf("%llu %d died\n", get_time() - main->ph->start,
				main->ph->i + 1);
			return (1);
		}
		++i;
	}
	return (0);
}
