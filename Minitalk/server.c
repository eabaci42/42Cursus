/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:32:12 by eabaci            #+#    #+#             */
/*   Updated: 2023/06/11 18:34:52 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<signal.h>
#include<unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
}

static void	ft_server(int sig, siginfo_t *info, void *unused)
{
	static int	bits = 7;
	static int	cpid;
	static char	c;

	(void)unused;
	cpid = info->si_pid;
	if (sig == SIGUSR1)
		bits--;
	else if (sig == SIGUSR2)
		c += 1 << bits--;
	if (bits < 0)
	{
		write(1, &c, 1);
		if (bits == -1 && c == '\n')
			kill(cpid, SIGUSR1);
		c = 0;
		bits = 7;
	}
}

int	main(void)
{
	struct sigaction	keep_signal;

	write(1, "Server PID: ", 13);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	keep_signal.sa_flags = SA_SIGINFO;
	keep_signal.sa_sigaction = ft_server;
	if (sigaction(SIGUSR1, &keep_signal, 0) == -1)
		write(1, "Error signal\n", 15);
	if (sigaction(SIGUSR2, &keep_signal, 0) == -1)
		write(1, "Error signal\n", 15);
	while (1)
		pause();
}
