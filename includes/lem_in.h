/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:21:32 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/08 13:38:20 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "libft.h"

typedef struct	s_lem
{
	t_list		*map;
	char		**charmap;
	char		**rooms;
	char		**roomname;
	char		**links;
	char		*start;
	char		*end;
	int			antno;
	char		*line;
	int			roomno;
	int			err;
}				t_lem;

void			ft_readmap(t_lem *lem);
int				ft_checkerror(t_lem *lem);
void			ft_delcomments(t_lem *lem);
void			ft_assignmap(t_lem *lem);
void			ft_lstremove(t_list *target, t_list *prev, t_lem *lem);
void			ft_assstart(t_lem *lem);
void			ft_assend(t_lem *lem);
void			ft_getant(t_lem *lem);
int				ft_validroom(char *str);
void			ft_buildrooms(t_lem *lem);
void			ft_buildlinks(t_lem *lem);
int				ft_validlink(char *str, t_lem *lem);
int				ft_isroom(char *str, t_lem *lem);

#endif
