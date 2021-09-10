/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:53:27 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/10 16:20:38 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>
# include <limits.h>

void	ft_long_push_swap(int *stack, size_t size);
void	ft_short_push_swap(int *stack, size_t size);
void	ft_freesplit(char **s);
size_t	ft_strlensplit(char	**s);
size_t	ft_countstack(int argc, const char **argv);
int		*ft_convstack(int argc, const char **argv, size_t size);
long	ft_long_atoi(const char *str);
size_t	ft_checkbin(int check, size_t bit);
void	ft_inistackb(int *stackb, size_t size);
void	ft_movestack(int *stacka, int *stackb, size_t bit, size_t size);
void	ft_combstack(int *stacka, int *stackb, size_t size);
void	ft_pa(int *stacka, int *stackb, size_t size);
void	ft_rra(int *stacka, size_t size);
void	ft_ra(int *stacka, size_t size);
void	ft_sa(int *stacka);
void	ft_sb(int *stackb);
void	ft_pb(int *stacka, int *stackb, size_t size);
size_t	ft_issort(int *stacka, size_t size);
size_t	ft_isrepeat(char **nums, size_t posnum);
void	ft_short_sort(int *stacka, int *stackb, size_t size);

#endif
