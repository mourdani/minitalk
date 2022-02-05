/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:31:52 by mourdani          #+#    #+#             */
/*   Updated: 2022/02/05 22:29:41 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	send_binary(char *binary, int pid)
{
	int	i;

	i = 0;
	while (binary[i])
	{
		if (binary[i] == '1')
			kill(pid, SIGUSR1);
		if (binary[i] == '0')
			kill(pid, SIGUSR2);
		i++;
		usleep(150);
	}
}

char	*add_end_zeros(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < 8)
	{
		str[i + j] = '0';
		j++;
	}
	return (str);
}

char	*ascii_to_b(char *str)
{
	int	i;
	int	j;
	char	c;
	char	*binary;

	i = 0;
	j = 0;
	binary = malloc((ft_strlen(str) * 8 + 9) * sizeof(char));
	if (!binary)
		return (NULL);
	while (str[i])
	{
		c = (int)str[i];
		j = i * 8 + 7;
		while (j >= (i * 8))
		{
			if (c % 2 == 1)
				binary[j] = '1';
			else
				binary[j] = '0';
			c /= 2;
			j--;
		}
		i++;
	}
	return (binary);
}

int	check_pid(char *pid)
{
	int	i;

	i = 0;
	while (pid[i])
	{
		if (pid[i] < '0' || pid[i] > '9')
		{
			ft_putstr("wrong PID");
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char *msg;

	if (argc != 3)
	{
		ft_putstr("USAGE : ./client [server PID] [array to send]");
		return (1);
	}
	if (check_pid(argv[1]) == 1)
		return (1);
	msg = ascii_to_b(argv[2]);
	msg = add_end_zeros(msg);
	ft_putstr(msg);
	send_binary(msg, ft_atoi(argv[1]));
	free(msg);
}
