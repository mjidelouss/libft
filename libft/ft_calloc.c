/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:50:50 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/13 19:49:16 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = (void *)malloc(size * count);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size * count);
	return (temp);
}
