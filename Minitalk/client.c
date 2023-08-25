/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:31:59 by eabaci            #+#    #+#             */
/*   Updated: 2023/06/11 18:01:08 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<signal.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i = (i * 10) + (*str++ - '0');
	return (i);
}

void	ft_signal_sent(int signal)
{
	(void)signal;
	write(1, "Signal sent successfully.\n", 26);
}

static void	ft_signal(int pid, char c, int bits, int s_bit)
{
	while (bits >= 0)
	{
		s_bit = c >> bits--;
		if (s_bit % 2 == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	if (ac != 3)
		return (0);
	i = 0;
	pid = ft_atoi(av[1]);
	signal(SIGUSR1, ft_signal_sent);
	while (av[2][i])
		ft_signal(pid, av[2][i++], 7, 0);
	ft_signal(pid, '\n', 7, 0);
	usleep(10000);
}
