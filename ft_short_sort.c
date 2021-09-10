/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:35:42 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 18:46:39 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_three_sort(int *stacka, size_t size)
{
	if ((size_t)stacka[0] == size - 2)
	{
		if ((size_t)stacka[1] == size - 1)
			ft_rra(stacka, size);
		else
			ft_sa(stacka);
	}
	else if ((size_t)stacka[0] == size - 1)
	{
		if ((size_t)stacka[1] == size - 2)
		{
			ft_ra(stacka, size);
			ft_sa(stacka);
		}
		else
		{
			ft_rra(stacka, size);
			ft_rra(stacka, size);
		}
	}
	else
	{
		ft_rra(stacka, size);
		ft_sa(stacka);
	}
}

void	ft_short_sort(int *stacka, int *stackb, size_t size)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 1;
	while (++i < size && size > 3)
	{
		if (stacka[0] == 0)
			ft_pb(stacka, stackb, size);
		else if (size == 5 && stacka[0] == 1)
			ft_pb(stacka, stackb, size);
		else
			ft_ra(stacka, size);
	}
	if (!ft_issort(stacka, size))
		ft_three_sort(stacka, size);
	if (size > 3)
	{
		if (ft_issort(stackb, size))
			ft_sb(stackb);
		ft_pa(stacka, stackb, size);
		if (size == 5)
			ft_pa(stacka, stackb, size);
	}
}
