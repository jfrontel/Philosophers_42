/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:12:32 by jfrontel          #+#    #+#             */
/*   Updated: 2023/03/22 12:12:34 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_tbl
{
	pthread_t		nb_philo;
	pthread_t		t_die;
	pthread_t		t_eat;
	pthread_t		t_sleep;
	pthread_t		nb_eat;
}				t_tbl;


#endif
