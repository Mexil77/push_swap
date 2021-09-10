/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:21:52 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 19:59:38 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char const *argv[])
{
	size_t	size;
	int		*stack;

	size = ft_countstack(argc, argv);
	if (!size)
		return (0);
	stack = ft_convstack(argc, argv, size);
	if (!stack)
	{
		ft_write_error();
		return (0);
	}
	stack[size] = '\0';
	if (size < 6)
		ft_short_push_swap(stack, size);
	else
		ft_long_push_swap(stack, size);
	return (0);
}
