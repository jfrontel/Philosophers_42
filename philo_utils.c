
#include "./include/philo.h"

long long	ft_atoi(const char *nptr)
{
	long		i;
	long long	mult;
	long long	number;

	i = 0;
	mult = 1;
	number = 0;
	if (nptr[0] == '\0')
		return (i);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\f' || \
			nptr[i] == '\r' || nptr[i] == '\n' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	number *= mult;
	return (number);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (unsigned char *)malloc(count * size);
	if ((count >= SIZE_MAX && size > 1) || (size >= SIZE_MAX && count > 1))
		return (NULL);
	if (ptr != NULL)
	{
		ft_bzero(ptr, size * count);
		return (ptr);
	}
	return (NULL);
}