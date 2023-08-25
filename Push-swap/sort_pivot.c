/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:56:37 by eabaci            #+#    #+#             */
/*   Updated: 2023/07/28 17:49:31 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_pivot(t_data *p)
{
	int	piv;

	while (p->a_size > 2)
	{
		piv = ft_array_pivot(p->arr_a, p->a_size);
		if (p->arr_a[p->a_size - 1] < piv)
			ft_push(p, 'b');
		else
			ft_rotate(p, 'a');
	}
}

int	ft_array_pivot(int *arr, int size)
{
	unsigned long long	sum;
	int					i;

	i = 0;
	sum = 0;
	while (i < size)
		sum += arr[i++];
	return (sum / size);
}
