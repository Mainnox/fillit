/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_input_output.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:59:45 by akremer           #+#    #+#             */
/*   Updated: 2018/11/27 18:30:13 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

t_fill		*switch_input_handling(int fd)
{
	int 	i;
	//t_fill	*handle;
	char	**line;
	char	**tmp;
	int		j;
	//t_fill	*start;

	i = 0;
	j = 0;
	if (!(line = (char**)malloc(sizeof(**line) * 2)))
		return (NULL);
	if (!(tmp = (char**)malloc(sizeof(**tmp) * 1000)))
		return (NULL);
	ft_putendl("Entree switch");
	while ((get_next_line(fd, line)) > 0)
	{
		if (!(tmp[i] = (char*)malloc(sizeof(char) * ft_strlen(line[0]))))
			return (NULL);
		ft_strcpy(tmp[i], line[0]);
		free(line[0]);
		i++;
/*		if (i == 3)
		{
			tmp[4] = NULL;
			handle = ft_fillnew((char const **)tmp, j);
			ft_putendl("Ici tu passe ?");
			if (j == 0)
				start = handle;
			handle = handle->next;
			ft_memfulldel((void**)tmp, 4);
			i = 0;
			j++;
		}
		*/
	}
	//free(tmp);
	ft_print_words_table(tmp);
	ft_putendl("Sortie switch");
	return (NULL);
}
