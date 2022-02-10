/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:16:44 by mourdani          #+#    #+#             */
/*   Updated: 2022/02/10 02:51:06 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

static char	ft_btoc(char *str)
{
	int	c;
	int	i;
	int	power;

	c = 0;
	power = 1;
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		c += (str[i] - '0') * power;
		i--;
		power *= 2;
	}
	return ((char)c);
}

void	handler(int signum)
{
	static char	*binary;
	static int	count;

	if (!binary)
	{
		count = 0;
		binary = ft_calloc(9, sizeof(char));
		if (!binary)
			return ;
	}
	count++;
	if (signum == SIGUSR1)
		binary[count - 1] = '1';
	else
		binary[count - 1] = '0';
	if (count == 8)
	{
		binary[count] = '\0';
		ft_putchar(ft_btoc(binary));
		free(binary);
		binary = NULL;
	}
	return ;
}

int	main(void)
{
	struct sigaction	action;

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
