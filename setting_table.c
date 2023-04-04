/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:21:14 by jfrontel          #+#    #+#             */
/*   Updated: 2023/04/04 15:21:17 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/philo.h"

void	ft_setting_table(t_tbl *tbl)
{
	int	var_pos;

	var_pos = 1;
	tbl->philo = calloc(tbl->nb_philo, sizeof (t_philo));
	tbl->fork = calloc(tbl->nb_philo, sizeof(t_fork));
	while (var_pos <= tbl->nb_philo)
	{
		tbl->philo[var_pos] = calloc(1, sizeof (int));
		tbl->philo[var_pos]->pos_tbl = var_pos;
		tbl->fork->pos = var_pos;
		tbl->philo[var_pos]->fork_r = var_pos;
		if (tbl->philo[var_pos]->pos_tbl == 1)
			tbl->philo[var_pos]->fork_l = tbl->nb_philo;
		else
			tbl->philo[var_pos]->fork_l = var_pos - 1;
		printf("Filosofo nº: %d, sus tenedores son a la der %d y a la izq %d\n", tbl->philo[var_pos]->pos_tbl, tbl->philo[var_pos]->fork_l, tbl->philo[var_pos]->fork_r);
		var_pos++;
	}
}
