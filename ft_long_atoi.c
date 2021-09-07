/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:36:11 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/06 21:16:42 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

long	ft_long_atoi(const char *str)
{
	int		i;
	long	number;
	int		signo;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	signo = 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signo *= (-1);
	number = 0;
	i--;
	while (ft_isdigit(str[++i]))
		number = 10 * number + str[i] - '0';
	if (str[i])
		return (-2147483649);
	number *= signo;
	return (number);
}
