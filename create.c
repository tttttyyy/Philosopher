/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:07:50 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/26 14:36:52 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	create(t_arg *ph, pthread_mutex_t *fork, int i)
{
	ph->i = i;
	if (i == ph->count - 1)
	{
		ph->left = fork + i;
		ph->right = fork;
		return ;
	}
	ph->left = fork + i;
	ph->right = fork + (i + 1);
}
