/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:07:06 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/27 17:31:36 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem_in.h"
#include <stdlib.h>

int	main(void)
{
	t_lem	*lem;

	lem = (t_lem*)malloc(sizeof(t_lem));
	ft_readmap(lem);
	/**/while(lem->map)
	{
		ft_putendl(lem->map->content);
		lem->map = lem->map->next;
	}
	return (0);
}
