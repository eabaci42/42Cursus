/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 04:55:11 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/29 17:23:12 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_controller(char c, va_list root)
{
	if (c == 'c')
		return (ft_putchar(va_arg(root, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(root, char *)));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_putpointer(va_arg(root, void *)) + 2);
	}
	else if (c == 'd')
		return (ft_putnbr(va_arg(root, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(root, int)));
	else if (c == 'u')
		return (ft_putunint(va_arg(root, unsigned int)));
	else if (c == 'x')
		return (ft_putstr(
				ft_basemake(va_arg(root, unsigned int), "0123456789abcdef")));
	else if (c == 'X')
		return (ft_putstr(
				ft_basemake(va_arg(root, unsigned int), "0123456789ABCDEF")));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

char	*ft_basemake(size_t num, char *set)
{
	static char	buffer[50];
	char		*str;
	int			base;

	base = ft_strlen(set);
	str = &buffer[49];
	*str = '\0';
	*--str = set[num % base];
	num /= base;
	while (num != 0)
	{
		*--str = set[num % base];
		num /= base;
	}
	return (str);
}

int	ft_printf(const char *av, ...)
{
	va_list	root;
	int		i;
	int		len;

	va_start(root, av);
	i = 0;
	len = 0;
	while (av[i])
	{
		if (av[i] == '%')
		{
			len += ft_controller(av[i + 1], root);
			i++;
		}
		else
			len += write(1, &av[i], 1);
		i++;
	}
	va_end(root);
	return (len);
}
