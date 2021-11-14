/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:02:35 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/07 21:39:10 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;
	tmp = *lst;
	while (*lst)
	{
		next= (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = next;
	}
	tmp = NULL;
}
