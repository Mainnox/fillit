/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:59:52 by akremer           #+#    #+#             */
/*   Updated: 2018/11/27 17:51:15 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int 	fd;
	t_fill	*handle;
	int		i;

	i = 0;
	if (argc < 2)
	{
		ft_putstr("Error: Veuillez passer la liste de Tetriminos en arguments !");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Error : Veuillez ne passer qu\'une seule liste de Tetriminos !");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	handle = switch_input_handling(fd);
	close(fd);
	return (0);
}
