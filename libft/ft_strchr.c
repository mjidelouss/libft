/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:19 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/05 20:12:43 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(char *) s)
	{
		if ((char)*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (c == 0)
		return ((char *) s);
	return (NULL);
}
