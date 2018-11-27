/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:48:46 by akremer           #+#    #+#             */
/*   Updated: 2018/11/27 17:52:28 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

#ifndef FILIT_H
# define FILIT_H
# include "libft/includes/libft.h"

typedef struct		s_fill
{
	char			**content;
	int				index;
	struct s_fill	*next;
}					t_fill;

t_fill				*ft_fillnew(char const **content, int index);
void				ft_print_chelou(char **tab, size_t i);
t_fill				*switch_input_handling(int fd);

#endif
