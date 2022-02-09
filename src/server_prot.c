/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_prot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:22:51 by mourdani          #+#    #+#             */
/*   Updated: 2022/02/09 02:15:44 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

char	ft_btoc(char *str)
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

void	ft_next(char **result, char **str)
{
	char		c;

	c = ft_btoc(*str);
	*result = ft_realloc(*result, c);
	if (!*result)
		return ;
	if ((int)c == '\0')
	{
		ft_putstr(*result);
		free(*result);
		*result = NULL;
	}
	free(*str);
	*str = NULL;
}

static void	ft_signal(int signal)
{
	static char	*str;
	static int	count;
	static char	*result;

	if (!result)
	{
		result = ft_calloc(1, sizeof(char));
		if (!result)
			return ;
	}
	if (!str)
	{
		str = ft_calloc(9, sizeof(char));
		if (!str)
			return ;
		count = 0;
	}
	count++;
	if (signal == SIGUSR1)
		str[count - 1] = '1';
	else
		str[count - 1] = '0';
	if (count % 8 == 0)
		ft_next(&result, &str);
}

int	main(void)
{
	ft_putstr("PID : ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	while (1)
	{
		signal(SIGUSR1, ft_signal);
		signal(SIGUSR2, ft_signal);
		pause();
	}
}
