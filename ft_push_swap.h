/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:53:27 by emgarcia          #+#    #+#             */
/*   Updated: 2021/09/06 17:58:27 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>

void	ft_push_swap(void);
void	ft_freesplit(char **s);
size_t	ft_strlensplit(char	**s);
size_t	ft_countstack(int argc, const char **argv);
int		*ft_convstack(int argc, const char **argv, size_t size);

#endif
