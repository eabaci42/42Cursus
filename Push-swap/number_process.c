/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:56:23 by eabaci            #+#    #+#             */
/*   Updated: 2023/07/27 13:10:24 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_numprocess(t_data *p, int ac, char **av)
{
	int	i;
	int	j;
	int	nm_start;

	ft_init(p);
	i = 0;
	while (++i < ac)
	{
		j = 0;
		nm_start = 0;
		while (av[i][j])
		{
			while (av[i][j] && av[i][j] == ' ')
				j++;
			nm_start = j;
			if (av[i][j] == '+' || av[i][j] == '-')
				j++;
			while (av[i][j] && av[i][j] != ' ')
				j++;
			ft_putnumber(p, &av[i][nm_start]);
		}
	}
}

void	ft_putnumber(t_data *p, char *str)
{
	int	number;

	number = ft_atoi(str);
	if (ft_check_samenum(p->arr_a, number,
			p->total_size - p->a_size, p->total_size) == 1)
		ft_error("Error");
	ft_array_push(p->arr_a, (p->total_size - 1) - p->a_size++, number);
}
