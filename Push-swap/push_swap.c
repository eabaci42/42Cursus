/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:56:28 by eabaci            #+#    #+#             */
/*   Updated: 2023/07/28 17:49:14 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_move2(t_data *p, int side)
{
	if (side > 0)
		ft_sort_fnhook(side, &ft_rotate, p, 'a');
	if (side < 0)
		ft_sort_fnhook(ft_abs(side), &ft_revrotate, p, 'a');
	ft_push(p, 'b');
}

void	ft_sort_threearg(t_data *p)
{
	if (p->a_size == 3)
	{
		if (ft_array_minidx(p->arr_a, p->a_size, INT_MIN) == 0)
		{
			if (p->arr_a[1] > p->arr_a[2])
				ft_sort_fnhook(1, &ft_revrotate, p, 'a');
			else if (p->arr_a[1] < p->arr_a[2])
				ft_sort_fnhook(1, &ft_rotate, p, 'a');
		}
		else if (ft_array_minidx(p->arr_a, p->a_size, INT_MIN) == 1)
		{
			if (p->arr_a[0] > p->arr_a[2])
				ft_swap(p, 'a');
			else if (p->arr_a[0] < p->arr_a[2])
				ft_sort_fnhook(1, &ft_rotate, p, 'a');
		}
		else if (ft_array_minidx(p->arr_a, p->a_size,
				INT_MIN) == 2 && p->arr_a[1] > p->arr_a[0])
		{
			ft_swap(p, 'a');
			ft_sort_fnhook(1, &ft_rotate, p, 'a');
		}
	}
}

void	ft_sort_fivearg(t_data *p)
{
	int	min;
	int	i;
	int	side;

	min = INT_MIN;
	while (p->a_size > 3)
	{
		i = ft_array_minidx(p->arr_a, p->a_size, min);
		min = p->arr_a[i];
		side = ft_get_movecount(p->a_size, i);
		ft_sort_move2(p, side);
	}
	ft_sort_threearg(p);
	if (!ft_check_sorted(p))
		ft_swap(p, 'a');
	ft_sort_fnhook(p->b_size, &ft_push, p, 'a');
}

int	main(int ac, char **av)
{
	t_data	p_data;

	if (ac > 1)
	{
		p_data.total_size = ft_check_numbers(ac, av);
		ft_numprocess(&p_data, ac, av);
		if (ft_check_sorted(&p_data) == 1)
			return (0);
		ft_array_numidx(&p_data);
		if (p_data.total_size > 5)
		{
			ft_sort_pivot(&p_data);
			ft_sort_process(&p_data);
		}
		else
			ft_sort_fivearg(&p_data);
		while (!ft_check_sorted(&p_data))
		{
			if (ft_array_minidx(p_data.arr_a, p_data.a_size, INT_MIN)
				>= p_data.a_size / 2)
				ft_rotate(&p_data, 'a');
			else
				ft_revrotate(&p_data, 'a');
		}
	}
}
