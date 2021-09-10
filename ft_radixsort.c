/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radixsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:23:28 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 14:28:15 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

size_t	ft_issort(int *stack, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size - 1 && stack[i + 1] > -1)
		if (stack[i] > stack[i + 1])
			return (0);
	return (1);
}

void	ft_movestack(int *stacka, int *stackb, size_t bit, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
	{
		if (ft_checkbin(stacka[0], bit))
			ft_pb(stacka, stackb, size);
		else
			ft_ra(stacka, size);
	}
}

void	ft_combstack(int *stacka, int *stackb, size_t size)
{
	size_t	i;

	i = -1;
	while (stackb[0] > -1 && ++i < size)
		ft_pa(stacka, stackb, size);
}
