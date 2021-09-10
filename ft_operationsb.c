/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operationsb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:20:01 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 14:40:56 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_pb(int *stacka, int *stackb, size_t size)
{
	size_t	i;
	int		aux;

	write(1, "pb\n", 3);
	aux = stacka[0];
	i = -1;
	while (++i < size - 1 && stacka[i + 1] > -1)
		stacka[i] = stacka[i + 1];
	while (i < size)
		stacka[i++] = -1;
	i = size;
	while (--i > 0)
		stackb[i] = stackb[i - 1];
	stackb[i] = aux;
}

void	ft_sb(int *stackb)
{
	int	aux;

	write(1, "sb\n", 3);
	aux = stackb[0];
	stackb[0] = stackb[1];
	stackb[1] = aux;
}
