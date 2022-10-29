/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <tyenokya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:21:06 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/29 14:48:10 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	main(int argc, char **argv)
{
	t_arg			sct;
	t_main			*main;

	if ((argc != 5 && argc != 6) || initialize_args(&sct, argv))
	{
		write(1, "Wrong arguments\n", 16);
		return (0);
	}
	main = (t_main *)malloc(sizeof(t_main));
	if (!main)
		return (0);
	sct.start = get_time();
	sct.timer = sct.start;
	int	i, id;
	i = -1;
	id = fork();
	while (++i < argc && id != 0)
	{
		id = fork();	
		printf("%d = %d\n", i, id);
	}
	//init(main, &sct);
	//conditions(sct, main);
	return (0);
	}
