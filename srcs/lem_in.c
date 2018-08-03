/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:07:06 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/03 13:02:03 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem_in.h"
#include <stdlib.h>

int	main(void)
{
	t_lem	*lem;
	int		i;

	lem = (t_lem*)malloc(sizeof(t_lem));
	ft_readmap(lem);
	ft_delcomments(lem);
	/**/while(lem->map)
	{
		ft_putendl(lem->map->content);
		lem->map = lem->map->next;
	}
	i = 0;
	while (lem->charmap[i])
		ft_putendl(lem->charmap[i++]);
	return (0);
}
