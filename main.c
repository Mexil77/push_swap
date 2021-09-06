/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:21:52 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/06 18:21:23 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	leaks(void)
{
	system("leaks push_swap");
}

void	ft_write_error(void)
{
	write(1, "Error", 5);
}

int	main(int argc, char const *argv[])
{
	size_t	size;
	size_t	i;
	int		*stack;

	i = -1;
	size = ft_countstack(argc, argv);
	stack = ft_convstack(argc, argv, size);
	if (!stack)
	{
		ft_write_error();
		return (0);
	}
	stack[size] = '\0';
	while (++i < size)
		printf("stack[%zu] : %d\n", i, stack[i]);
	free(stack);
	return (0);
}
