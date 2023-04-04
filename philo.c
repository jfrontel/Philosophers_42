/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:12:23 by jfrontel          #+#    #+#             */
/*   Updated: 2023/03/22 12:12:26 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/philo.h"

void	ft_leaks(void)
{
	system("leaks -q philo.c");
}

int	main(int ac, char **av)
{
	t_tbl	tbl;

	atexit(ft_leaks);
	printf("%d\n", ac);
	if (ac != 5 && ac != 6)
	{
		printf("Estamos aqui\n");
		ft_error(1);
	}
	else if (ft_validate_arg(ac, av) == 0)
		printf("Todo va bien\n");
		ft_get_argument(ac, av, &tbl);
		ft_setting_table(&tbl);
	return (0);
}
