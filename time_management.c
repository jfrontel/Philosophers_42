/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:06:29 by jfrontel          #+#    #+#             */
/*   Updated: 2023/03/22 16:09:17 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

time_t  get_time_in_ms(void)
{
    struct timeval  tv;
    
    gettimeofday(&tv, NULL);
    return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

int (main(void))
{
    time_t  start_time;
    time_t  end_time;
    time_t  time;

    start_time = get_time_in_ms();
    end_time = start_time + 200;
    time = get_time_in_ms();
    printf("Time in ms = %ld. Time since start = %ld\n", time, time - start_time);
    while (get_time_in_ms() < end_time)
	{
		usleep(100 * 10); // Suspend for 100 milliseconds
		time = get_time_in_ms();
		printf("Time in ms = %ld. Time since start = %ld\n", time, time - start_time);
	}
	return (0);
}
