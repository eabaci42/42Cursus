/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_generic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:57:12 by eabaci            #+#    #+#             */
/*   Updated: 2023/07/28 18:02:13 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init(t_data *p)
{
	p->arr_a = malloc(sizeof(int) * p->total_size);
	if (!p->arr_a)
		return (ft_error("Error"));
	p->arr_b = malloc(sizeof(int) * p->total_size);
	if (!p->arr_b)
		return (ft_error("Error"));
	p->a_size = 0;
	p->b_size = 0;
	return (1);
}

int	ft_atoi(char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign > INT_MAX)
			return (ft_error("Error"));
		if (result * sign < INT_MIN)
			return (ft_error("Error"));
		i++;
	}
	return ((int)result * sign);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	ft_error(char *s)
{
	ft_putstr(s);
	ft_putstr("\n");
	exit(1);
	return (0);
}
