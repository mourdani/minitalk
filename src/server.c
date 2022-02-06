/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:16:44 by mourdani          #+#    #+#             */
/*   Updated: 2022/02/06 23:25:54 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

char	*fill_binary(int signum)
{
	char *binary;

	if (signum == SIGUSR1)
		ft_putstr("1");
	else
		ft_putstr("0");
	return (binary);
}

void	handler(int signum)
{
	char	*msg;

	msg = fill_binary(signum);
}

int main()
{
	struct sigaction action;

	ft_putstr("server PID : ");
	ft_putnbr(getpid());
	ft_putchar('\n');

	action.sa_handler = handler;
	action.sa_flags = SA_RESTART;
	sigemptyset(&action.sa_mask);
	sigaddset(&action.sa_mask, SIGUSR1);
	sigaddset(&action.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	while (1)
		pause();
	return (0);
}
