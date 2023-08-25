/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:35:15 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/20 04:46:16 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!s)
		return (0);
	if (!s || !len || start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		str = malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (s[start] && ++i <= len)
	{
		str[++j] = (char)s[start];
		start++;
	}
	str[len] = '\0';
	return (str);
}
