/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:21:32 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/02 15:14:28 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "libft.h"

typedef struct	s_lem
{
	t_list		*map;
	char		**rooms;
	char		**links;
	char		*start;
	char		*end;
	int			antno;
	char		*line;
}				t_lem;

void			ft_readmap(t_lem *lem);
int				ft_checkerror(t_lem *lem);
void			ft_delcomments(t_lem *lem);

#endif
