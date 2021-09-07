/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:52:15 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/07 23:22:27 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_impbin(int n)
{
	if (!n)
		printf("0");
	while (n)
	{
		if (n & 1)
			printf("1");
		else
			printf("0");
		n >>= 1;
	}
	printf("\n");
}

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

size_t	ft_movestack(int *stacka, int *stackb, size_t bit, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
	{
		printf("stacka[0] : %d\n", stacka[0]);
		if (ft_checkbin(stacka[0], bit))
			ft_pb(stacka, stackb, size);
		else
			ft_ra(stacka, size);
	}
	return (0);
}

void	ft_printaux(int *stack, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		printf("stack[%zu] : %d\n", i, stack[i]);
	printf("\n");
	i = -1;
	while (++i < size && stack[i] >= 0)
		ft_impbin(stack[i]);
	printf("\n");
}

void	ft_push_swap(int *stacka, size_t size)
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
		ft_printaux(stacka, size);
		ft_movestack(stacka, stackb, 0, size);
		ft_printaux(stacka, size);
		free(stackb);
	}
	free(stacka);
}
