/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:58:41 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/19 15:33:13 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	initialize_args(t_arg *ph, char **argv)
{
	int	avi;
	int	i;

	i = 0;
	while (argv[++i])
	{
		avi = ft_atoi(argv[i]);
		if (!(avi) || avi < 0 || (avi > 200 && i == 1))
			return (1);
		if (avi < 60 && (i == 2 || i == 3 || i == 4))
			return (1);
		if (i == 1)
			ph->count = avi;
		else if (i == 2)
			ph->tdie = avi;
		else if (i == 3)
			ph->teat = avi;
		else if (i == 4)
			ph->tsleep = avi;
		else
			ph->neat = avi;
	}
	if (!argv[5])
		ph->neat = 0;
	return (0);
}
