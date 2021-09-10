/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operationsa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 22:01:57 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 17:11:58 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

size_t	ft_checkbin(int check, size_t bit)
{
	if (!check)
		return (1);
	check >>= bit;
	if (check & 1)
		return (0);
	else
		return (1);
}

void	ft_pa(int *stacka, int *stackb, size_t size)
{
	size_t	i;
	int		aux;

	write(1, "pa\n", 3);
	aux = stackb[0];
	i = -1;
	while (++i < size - 1 && stackb[i + 1] > -1)
		stackb[i] = stackb[i + 1];
	while (i < size)
		stackb[i++] = -1;
	i = size;
	while (--i > 0)
		stacka[i] = stacka[i - 1];
	stacka[i] = aux;
}

void	ft_ra(int *stacka, size_t size)
{
	size_t	i;
	int		aux;

	write(1, "ra\n", 3);
	aux = stacka[0];
	i = -1;
	while (++i < size - 1 && stacka[i + 1] > -1)
		stacka[i] = stacka[i + 1];
	stacka[i] = aux;
}

void	ft_rra(int *stacka, size_t size)
{
	size_t	i;
	int		aux;

	write(1, "rra\n", 4);
	i = size - 1;
	while (i > 0 && stacka[i] == -1)
		i--;
	aux = stacka[i];
	i++;
	while (--i > 0)
		stacka[i] = stacka[i - 1];
	stacka[i] = aux;
}

void	ft_sa(int *stacka)
{
	int	aux;

	write(1, "sa\n", 3);
	aux = stacka[0];
	stacka[0] = stacka[1];
	stacka[1] = aux;
}
