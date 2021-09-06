/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:21:52 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/06 14:59:17 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	leaks(void)
{
	system("leaks test");
}

int	main(int argc, char const *argv[])
{
	size_t	i;
	size_t	j;
	char	**nums;

	i = 0;
	j = -1;
	printf("argc : %d\n", argc);
	while (++i < (size_t)argc)
	{
		nums = ft_split(argv[i], ' ');
		while (++j < ft_strlensplit(nums))
			printf("nums[%zu][%zu] : %s\n", i, j, nums[j]);
		ft_freesplit(nums);
		j = -1;
	}
	//atexit(leaks);
	return (0);
}
