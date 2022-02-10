/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_ui.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:22 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/10 04:09:43 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int	ft_count_digits_ui(unsigned int number)
{
	int	digit_count;

	digit_count = 1;
	while (number)
	{
		number /= 10;
		digit_count++;
	}
	return (digit_count);
}
