/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:56:59 by eabaci            #+#    #+#             */
/*   Updated: 2023/07/28 11:35:53 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//ft_array_push(p->arr_a, p->a_size++, p->arr_b[p->b_size-- - 1]);
void	ft_array_push(int *arr, int size, int value)
{
	arr[size] = value;
}

void	ft_array_swap(int *arr, int size)
{
	int	tmp;

	if (size-- < 2)
		return ;
	tmp = arr[size];
	arr[size] = arr[size - 1];
	arr[size - 1] = tmp;
}

void	ft_array_rotate(int *arr, int size)
{
	int	tmp;

	size--;
	tmp = arr[size];
	while (size > 0)
	{
		arr[size] = arr[size - 1];
		size--;
	}
	arr[0] = tmp;
}

void	ft_array_revrotate(int *arr, int size)
{
	int	i;
	int	tmp;

	tmp = arr[0];
	i = 1;
	while (i < size)
	{
		arr[i - 1] = arr[i];
		i++;
	}
	arr[size - 1] = tmp;
}
