/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_hex_ul.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:22 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/10 04:13:13 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int	ft_count_digits_hex_ul(unsigned long number)
{
	int	digit_count;

	digit_count = 1;
	while (number)
	{
		number /= 16;
		digit_count++;
	}
	return (digit_count);
}