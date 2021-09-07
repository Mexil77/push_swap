/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackaux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:57:06 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/07 16:26:42 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

size_t	ft_countstack(int argc, const char **argv)
{
	size_t	i;
	size_t	size;
	char	**nums;

	i = 0;
	size = 0;
	while (++i < (size_t)argc)
	{
		nums = ft_split(argv[i], ' ');
		size += ft_strlensplit(nums);
		ft_freesplit(nums);
	}
	return (size);
}

void	ft_dropnums(char **nums, int *stack, size_t *sizenums)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlensplit(nums))
	{
		stack[*sizenums] = ft_atoi(nums[i]);
		*sizenums += 1;
	}
}

size_t	ft_valnums(char **nums, int *stack, size_t sizenums)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (++i < ft_strlensplit(nums))
	{
		if (ft_long_atoi(nums[i]) > INT_MAX || ft_long_atoi(nums[i]) < INT_MIN)
			return (0);
		while (++j < sizenums)
			if (ft_atoi(nums[i]) == stack[j])
				return (0);
		j = -1;
	}
	return (1);
}

int	*ft_convstack(int argc, const char **argv, size_t size)
{
	size_t	i;
	size_t	j;
	int		*stack;
	char	**nums;

	i = 0;
	j = 0;
	stack = malloc(sizeof(int) * (size + 1));
	if (!stack)
		return (NULL);
	stack[size] = '\0';
	while (++i < (size_t)argc)
	{
		nums = ft_split(argv[i], ' ');
		if (ft_valnums(nums, stack, j))
			ft_dropnums(nums, stack, &j);
		ft_freesplit(nums);
	}
	if (j < size)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}
