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

void    ft_leaks(void)
{
    system("leaks -q philo.c");

}

void ft_error(int x)
{
	if (x == 1)
		printf("Error en número de argumentos introducidos");
	else if (x == 2)
		print("Error, los argumentos introducidos deben ser números");
	else if (x == 3)
		print("Error, numero demasiado grande");
	else if (x == 4)
		print("El número de philosofos debe ser mayor o igual a 1");
	exit(EXIT_FAILURE);
}

int main(int ac, char **av)
{
    t_data table;

	table == NULL;
    atexit(ft_leaks);
    if (ac != 5 || ac != 6)
    	ft_error(1);
	else if (ft_validate_arg(ac, av) == 0);
		ft_get_argument(ac, av, &tbl);
	
    
return(0);        
}
