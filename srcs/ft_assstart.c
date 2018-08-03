/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:04:08 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/03 13:14:22 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem_in.h"
#include <stdlib.h>

int		ft_numstarts(t_list *map)
{
	int	count;

	count = 0;
	while (map)
	{
		if (!ft_strcmp(map->content, "##start"))
			count++;
		map = map->next;
	}
	return (count);
}

void	ft_assstart(t_lem *lem)
{
	t_list	*tmp;
	int		numstarts;

	tmp = lem->map;
	numstarts = ft_numstarts(tmp);
}
