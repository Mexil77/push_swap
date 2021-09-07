/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:53:27 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/07 17:06:41 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>
# include <limits.h>

void	ft_push_swap(int *stack, size_t size);
void	ft_freesplit(char **s);
size_t	ft_strlensplit(char	**s);
size_t	ft_countstack(int argc, const char **argv);
int		*ft_convstack(int argc, const char **argv, size_t size);
long	ft_long_atoi(const char *str);

#endif
