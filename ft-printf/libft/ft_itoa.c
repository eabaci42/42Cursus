/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:32:49 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/20 04:43:43 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i = 1;
	}
	while (n)
	{
		if (n != 0)
		{
			i++;
			n = n / 10;
		}
	}
	return (i);
}

static char	*nummake(int n, int nbrlen, char *str)
{
	int	num;

	num = 0;
	while (nbrlen >= 0)
	{
		num = n % 10;
		str[nbrlen--] = num + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		nbrlen;
	char	*str;
	int		sign;

	nbrlen = numlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * nbrlen + 1);
	if (!str)
		return (0);
	sign = 1;
	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	str[nbrlen--] = '\0';
	nummake(n, nbrlen, str);
	if (sign == -1)
		str[0] = '-';
	return (str);
}
