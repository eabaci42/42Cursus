/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:37:06 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/29 13:47:02 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	int	sayi;

	sayi = 0;
	sayi += write(1, &c, 1);
	return (sayi);
}

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

int	ft_putpointer(void *ptr)
{
	unsigned long	ret;
	int				i;

	ret = (unsigned long)ptr;
	i = 0;
	if (ret > 15)
		i += ft_putpointer((void *)(ret / 16));
	i += ft_putchar("0123456789abcdef"[ret % 16]);
	return (i);
}

int	ft_putnbr(int number)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(number);
	len += ft_putstr(num);
	free(num);
	return (len);
}

int	ft_putunint(unsigned int number)
{
	int	i;

	i = 0;
	if (number > 9)
		i += ft_putunint(number / 10);
	i += ft_putchar("0123456789"[number % 10]);
	return (i);
}
