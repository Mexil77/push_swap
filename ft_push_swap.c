/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:52:15 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 17:21:55 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	*ft_renamenums(int *stack, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	val;
	int		*newstack;

	i = -1;
	j = -1;
	val = 0;
	newstack = malloc(sizeof(int) * (size + 1));
	if (!newstack)
		return (NULL);
	newstack[size] = '\0';
	while (++i < size)
	{
		while (++j < size)
			if (stack[i] > stack[j])
				val++;
		newstack[i] = val;
		val = 0;
		j = -1;
	}
	return (newstack);
}

void	ft_long_push_swap(int *stacka, size_t size)
{
	int		*aux;
	int		*stackb;
	size_t	i;

	i = -1;
	aux = stacka;
	stacka = ft_renamenums(stacka, size);
	free(aux);
	stackb = malloc(sizeof(int) * (size + 1));
	if (stackb)
	{
		stackb[size] = '\0';
		ft_inistackb(stackb, size);
		while (!ft_issort(stacka, size))
		{
			ft_movestack(stacka, stackb, ++i, size);
			ft_combstack(stacka, stackb, size);
		}
		free(stackb);
	}
	free(stacka);
}

void	ft_short_push_swap(int *stacka, size_t size)
{
	int		*aux;
	int		*stackb;

	aux = stacka;
	stacka = ft_renamenums(stacka, size);
	free(aux);
	stackb = malloc(sizeof(int) * (size + 1));
	if (stackb)
	{
		stackb[size] = '\0';
		ft_inistackb(stackb, size);
		if (size <= 2 && !ft_issort(stacka, size))
			ft_sa(stacka);
		else if (!ft_issort(stacka, size))
			ft_short_sort(stacka, stackb, size);
		free(stackb);
	}
	free(stacka);
}
