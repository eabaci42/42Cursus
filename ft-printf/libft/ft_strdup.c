/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:34:28 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/19 20:21:54 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s);
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i--)
		str[i] = s[i];
	return (str);
}
