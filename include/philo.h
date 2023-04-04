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


typedef struct s_fork
{
	pthread_mutex_t	mutex_fork;
	int		pos;


}		t_fork;


typedef struct s_philo
{
	int			pos_tbl;
	int			fork_r;
	int			fork_l;

}		t_philo;


typedef struct s_tbl
{
	t_philo		**philo;
	t_fork		*fork;
	int			nb_philo;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	int			nb_eat;
}				t_tbl;

/*		VALIDATE_ARG	*/
void		ft_error(int x);
int			ft_isdigit(char *str);
int			ft_overflow(int ac, char **av);
int			ft_get_argument(int ac, char **av, t_tbl *tbl);
int			ft_validate_arg(int ac, char **av);

/*		PHILO_UTILS		*/
void		ft_bzero(void *str, size_t n);
long long	ft_atoi(const char *nptr);
void		*ft_calloc(size_t count, size_t size);

/*		SETTING_TABLE	*/
void		ft_setting_table(t_tbl *tbl);

#endif
