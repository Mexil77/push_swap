/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitaux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:48:11 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/08 21:39:44 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

size_t	ft_strlensplit(char	**s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_freesplit(char **s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		free(s[i]);
	free(s);
}

size_t	ft_isrepeat(char **nums, size_t posnum)
{
	size_t	i;

	i = -1;
	while (++i < posnum)
		if (ft_atoi(nums[i]) == ft_atoi(nums[posnum]))
			return (1);
	return (0);
}
