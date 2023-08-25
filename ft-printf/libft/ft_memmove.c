/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:33:30 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/19 22:37:42 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
