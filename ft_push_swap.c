/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:52:15 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/08 16:59:54 by emgarcia         ###   ########.fr       */
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

void	ft_printaux(int *stacka, int *stackb, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		printf("stacka[%zu] : %d\n", i, stacka[i]);
	i = -1;
	while (++i < size && stacka[i] >= 0)
		ft_impbin(stacka[i]);
	printf("\n");
	i = -1;
	while (++i < size)
		printf("stackb[%zu] : %d\n", i, stackb[i]);
	i = -1;
	while (++i < size && stackb[i] >= 0)
		ft_impbin(stackb[i]);
	printf("\n");
}

void	ft_push_swap(int *stacka, size_t size)
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
