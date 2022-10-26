/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:22:43 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/23 11:37:33 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	add_time(t_arg **ph)
{
	unsigned long long	t;
	int					i;

	t = get_time();
	i = 0;
	while (i < ph[i]->count)
	{
		write(1, "hello\n", 6);
		ph[i]->start = t;
		ph[i]->timer = t;
		++i;
	}
}
