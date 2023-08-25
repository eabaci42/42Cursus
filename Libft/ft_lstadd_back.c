/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:42:55 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/21 04:23:04 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	iter = *lst;
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (iter -> next != NULL)
		{
			iter = iter -> next;
		}
		iter -> next = new;
	}
}
