/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:21:32 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/27 18:02:44 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "libft.h"

typedef struct	s_room
{
	char		*name;
	t_list		*tunnels;
}				t_room;

typedef struct	s_lem
{
	t_list		*map;
	t_list		*rooms;
	t_room		*start;
	t_room		*end;
	char		*line;
}				t_lem;

void			ft_readmap(t_lem *lem);
int				ft_checkerror(t_lem *lem);

#endif
