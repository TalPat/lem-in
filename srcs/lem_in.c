/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:07:06 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/08 14:06:32 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem_in.h"
#include <stdlib.h>

void	ft_initialise(t_lem *lem)
{
	lem->start = NULL;
	lem->end = NULL;
	lem->roomname = NULL;
	lem->antno = 0;
	lem->err = 0;
	lem->roomno = 0;
	ft_readmap(lem);
	ft_delcomments(lem);
	ft_getant(lem);
	ft_assstart(lem);
	ft_assend(lem);
	ft_buildrooms(lem);
	ft_buildlinks(lem);
	if (ft_lstlen(lem->map) > 0)
		lem->err = 1;
}

void	ft_testtingstuff(t_lem *lem)
{
	int		i;

	/**/ft_putendl("whats left-------------------------------->");
	/**/while(lem->map)
	{
		ft_putendl(lem->map->content);
		lem->map = lem->map->next;
	}
	/**/ft_putendl("og map------------------------------------>");
	i = 0;
	while (lem->charmap[i])
		ft_putendl(lem->charmap[i++]);
	/**/ft_putendl("start------------------------------------->");
	if (lem->start)
		ft_putendl(lem->start);
	/**/ft_putendl("end--------------------------------------->");
	if (lem->end)
		ft_putendl(lem->end);
	/**/ft_putendl("ant no------------------------------------>");
	ft_putnbr(lem->antno);
	ft_putendl("");
	/**/ft_putendl("rooms------------------------------------->");
	i = 0;
	if (lem->rooms)
		while (lem->rooms[i])
			ft_putendl(lem->rooms[i++]);
	/**/ft_putendl("links------------------------------------->");
	i = 0;
	if (lem->links)
		while (lem->links[i])
			ft_putendl(lem->links[i++]);
	/**/ft_putendl("room names-------------------------------->");
	i = 0;
	if (lem->roomname)
		while (lem->roomname[i])
			ft_putendl(lem->roomname[i++]);
}

int		main(void)
{
	t_lem	*lem;

	lem = (t_lem*)malloc(sizeof(t_lem));
	ft_initialise(lem);
	if (lem->err)
	{
		ft_putstr_fd("ERROR\n", 2);
		return (0);
	}
	/**/ft_testtingstuff(lem);
	return (0);
}
