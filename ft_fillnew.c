/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:34:10 by akremer           #+#    #+#             */
/*   Updated: 2018/11/27 17:52:43 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fill			*ft_fillnew(char const **content, int index)
{
	t_fill	*maillon;
	char	**ncontent;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(maillon = (t_fill*)malloc(sizeof(t_fill))))
		return (NULL);
	if (!(ncontent = (char**)malloc(sizeof(**ncontent) * 5)))
		return (NULL);
	while (content[i])
	{
		ncontent[i] = ft_memalloc(ft_strlen(content[i]));
		ncontent[i] = ft_strcpy(ncontent[i], content[i]);
		i++;
	}
	ncontent[i] = NULL;
	maillon->content = ncontent;
	maillon->index = index;
	maillon->next = NULL;
	return (maillon);
}
