/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findpath.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:08:03 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/08 16:43:46 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem-in.h"
#include <stdlib.h>

void	ft_instpath(t_lem *lem)
{
	int	i;

	i = 0;
	lem->path = (char**)malloc(sizeof(char*) * (lem->roomno + 1));
	lem->visited = (char**)malloc(sizeof(char*) * (lem->roomno + 1));
	lem->curlinks = (char**)malloc(sizeof(char*) * (lem->roomno) + 1);
	while (i <= lem->roomno)
	{
		lem->curlinks[i] = NULL;
		lem->path[i] = NULL;
		lem->visited[i] = NULL;
		i++;
	}
	lem->path[0] = ft_strdup(lem->start);
}

void	ft_getlinks(t_lem *lem, char *cur)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	while (lem->links[i])
	{
		split = ft_strsplit(lem->links[i]);
		if (!ft_strcmp(cur, split[0]) || !ft_strcmp(cur, split[1]))
		{
			if (!ft_strcmp(cur, split[0]))
				lem->curlinks[j] = split[0];
			if (!ft_strcmp(cur, split[1]))
				lem->curlinks[j] = split[1];
			j++;
		}
		i++;
	}
}

void	ft_findpath(t_lem *lem)
{
	char	*cur;
	int		i;
	int		found;

	i = 0;
	ft_instpath(lem);
	cur = lem->path[i];
	found = 0;
	while (!found)
	{
		ft_getlinks(lem, cur);
	}
}
