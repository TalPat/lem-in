/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerror.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 17:39:58 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/27 18:06:21 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem_in.h"
#include <stdlib.h>

int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkerror(t_lem *lem)
{
	t_list	*tmp;

	tmp = lem->map;
	while (((char*)(tmp->content))[0] == '#')
		tmp = tmp->next;
	if (!ft_isnumber(tmp->content))
		return (1);
	return (0);
}
