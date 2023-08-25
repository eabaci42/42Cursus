/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:31:26 by eabaci            #+#    #+#             */
/*   Updated: 2022/12/29 17:22:55 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

int		ft_printf(const char *sign, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putpointer(void *ptr);
int		ft_putnbr(int number);
int		ft_putunint(unsigned int number);
char	*ft_basemake(size_t num, char *set);

#endif