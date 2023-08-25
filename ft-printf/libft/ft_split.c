/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:34:21 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/19 22:32:37 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(char *str, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			n++;
		}
	}
	return (n);
}

static int	charlen(char *str, char c, int i)
{
	int	k;

	k = 0;
	while (str[i] && str[i] != c)
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (0);
	tab = malloc((wordcounter(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tab[j] = ft_substr(s, i, charlen(s, c, i));
			j++;
			i += charlen(s, c, i);
		}
	}
	tab[j] = NULL;
	return (tab);
}
