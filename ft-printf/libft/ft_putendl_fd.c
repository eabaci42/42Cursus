/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:33:43 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/19 22:48:57 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	if (!fd || !s)
		return ;
	nl = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}
