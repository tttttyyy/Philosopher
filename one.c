/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:18:36 by tyenokya          #+#    #+#             */
/*   Updated: 2022/10/06 16:54:59 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	one(t_arg sct)
{
	printf("%llu 1 has taken a fork\n", get_time() - sct.start);
	ft_usleep(sct.tdie);
	printf("%llu 1 died\n", get_time() - sct.start);
	return (1);
}
