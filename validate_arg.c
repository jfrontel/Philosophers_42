/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:18:41 by jfrontel          #+#    #+#             */
/*   Updated: 2023/03/24 15:18:43 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/philo.h"

void	ft_error(int x)
{
	if (x == 1)
		printf("Error en número de argumentos introducidos");
	else if (x == 2)
		printf("Error, los argumentos introducidos deben ser números");
	else if (x == 3)
		printf("Error, numero demasiado grande");
	else if (x == 4)
		printf("El número de philosofos debe ser mayor o igual a 1");
	exit(EXIT_FAILURE);
}

int	ft_isdigit(char *str)
{
	int			i;
	long int	nb;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_overflow(int ac, char **av)
{
	int			i;
	long long	overflow;

	i = 1;
	while (i < ac)
	{
		overflow = ft_atoi(av[i]);
		if (overflow < INT_MIN || overflow > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_argument(int ac, char **av, t_tbl *tbl)
{
	if (ft_atoi(av[1]) <= 0)
		ft_error(4);
	else
		tbl->nb_philo = ft_atoi(av[1]);
	tbl->t_die = ft_atoi(av[2]);
	tbl->t_eat = ft_atoi(av[3]);
	tbl->t_sleep = ft_atoi(av[4]);
	if (ac == 6)
		tbl->nb_eat = ft_atoi(av[5]);
	else
		tbl->nb_eat = -1;
	return (0);
}

int	ft_validate_arg(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_isdigit(av[i]) == 1)
			ft_error(2);
		i++;
	}
	if (ft_overflow(ac, av) == 1)
		ft_error(3);
	return (0);
}
