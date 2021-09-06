/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackaux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:57:06 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/06 18:19:36 by emgarcia         ###   ########.fr       */
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

int	*ft_convstack(int argc, const char **argv, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		*stack;
	char	**nums;

	i = 0;
	j = -1;
	k = 0;
	stack = malloc(sizeof(int) * (size + 1));
	if (!stack)
		return (NULL);
	while (++i < (size_t)argc)
	{
		nums = ft_split(argv[i], ' ');
		while (++j < ft_strlensplit(nums))
			stack[k++] = ft_atoi(nums[j]);
		ft_freesplit(nums);
		j = -1;
	}
	return (stack);
}
