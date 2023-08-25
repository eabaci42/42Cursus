/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:44:05 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/21 04:48:29 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*iter;

	if (!lst)
		return ;
	while ((*lst))
	{
		iter = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = iter;
	}
}
