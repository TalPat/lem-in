/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:49:24 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/02 16:10:55 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lem_in.h"
#include <stdlib.h>

void    ft_lstremove(t_list **target, t_list *prev)
{
    t_list  *tmp;

    if (!prev)
    {
        tmp = (*target)->next;
        free((*target)->content);
        free(*target);
        *target = tmp;
    }
    else
    {
        tmp = (*target)->next;
        free((*target)->content);
        free(*target);
        prev->next = tmp;
    }
}

void    ft_delcomments(t_lem *lem)
{
    t_list  *tmp;
    t_list  *prev;

    tmp = lem->map;
    prev = NULL;
    while (tmp)
    {
        if (ft_strcmp((char*)(tmp->content), "##start")
        && ft_strcmp((char*)(tmp->content), "##end")
        && ((char*)(tmp->content))[0] == '#')
            ft_lstremove(&tmp, prev);
        prev = tmp;
        tmp = tmp->next;
    }
}