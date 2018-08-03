/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:18:15 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/03 13:00:39 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include "libft.h"
#include <stdlib.h>

void	ft_readmap(t_lem *lem)
{
	if (ft_grabline(0, &(lem->line)) == 1)
		lem->map = ft_lstnew(lem->line, ft_strlen(lem->line) + 1);
	else
		lem->map = NULL;
	while (ft_grabline(0, &(lem->line)) == 1)
	{
		ft_lstaddend(lem->map, lem->line, ft_strlen(lem->line) + 1);
	}
	ft_assignmap(lem);
}
